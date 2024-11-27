
/*
 g++ ReadIMU.cpp QB_lib/cp_communications.cpp QB_lib/qbmove_communications.cpp -std=c++11 -I/usr/include/python2.7 -lpython2.7 -o ReadIMU 
*/

#include "QB_lib/commands.h"
#include "QB_lib/qbmove_communications.h"
#include "QB_lib/cp_commands.h"
#include "QB_lib/cp_communications.h"
#include "matplotlibcpp.h"

#include "iostream"
#include <math.h>
#include <fstream>
#include <signal.h>
#include <sys/time.h>
#include <unistd.h>
#include <chrono>
#include <ctime>


const char* COMPort = "/dev/ttyUSB1";
int SoftHand_id = 1;
int Pulse_id = 2;

comm_settings comm_settings_t;
uint8_t aux_string[5000];
uint8_t PARAM_SLOT_BYTES = 50;
int num_of_params;
int n_imu;
uint8_t* ids;
uint8_t* imu_table;
uint8_t* mag_cal;
float* imu_values;
uint8_t num_imus_id_params = 7;
uint8_t num_mag_cal_params = 0;
uint8_t first_imu_parameter = 2;
uint8_t new_board = 1;
FILE* imu_file;
short int inputs[2];
short int inputsPULSE[3];

int cnt = 0;
int index1 = 0;
float tempo[1000000];
char aux_char;
short int currents[2];
short int residual_current;
short int pressure;
short int emg[2];        ///< Emg sensors values read from the device

int i = 0 ,k = 0;

float acc_value[1000000][20];
int a;
using namespace std;

namespace plt = matplotlibcpp;
using namespace std::chrono;

void sleep_us(uint32_t microseconds) {// fa la stessa cosa di usleep(), solo che questa funziona anche su windows
	using namespace std::chrono;
    high_resolution_clock::time_point t0 = high_resolution_clock::now();
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    duration<double> time_span = duration_cast<duration<double>>(t1 - t0);
    do { 
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        time_span = duration_cast<duration<double>>(t1 - t0);
    }
    while(time_span.count()*1000000 < microseconds);
}

void signal_callback_handler(int signum) {  // Codice che viene eseguito quando fai CTRL+C
   	closeRS485( &comm_settings_t );
   	std::cout << "\n - Execution stopped -  \n"  << std::endl;
    // Terminate program
    exit(signum);
}

int main(){

	signal(SIGINT, signal_callback_handler);

////////////////////////////////////////////// ---- OPEN RS485 COMMUNICATION ---- /////////////////////////////////////////////////////
   
    openRS485( &comm_settings_t , COMPort, 2000000) ;       // QB Board Opening
	usleep(500000);

//////////////////////////////////////////// ---- RETRIEVE IMU BOARD PARAMETER ---- //////////////////////////////////////////////

	if (commGetIMUParamList(&comm_settings_t, SoftHand_id, 0, NULL, 0, 0, aux_string) < 0){
		// If commGetIMUParamList returns -1, the connected board is a PSoC3 board instead of a STM32 or PSoC5 board
		// so call the commGetParamList instead
		new_board = 0;
		commGetParamList(&comm_settings_t, SoftHand_id, 0, NULL, 0, 0, aux_string);
		num_imus_id_params = 6;
	}
	
	num_of_params = aux_string[5];
	
	//aux_string[6] <-> packet_data[2] on the firmware
	n_imu = aux_string[8];
	printf("Number of connected IMUs: %d\n", n_imu);
	
	// Compute number of read parameters depending on n_imu and
	// update packet_length
	num_mag_cal_params = (n_imu / 2);
	if ( (n_imu - num_mag_cal_params*2) > 0 ) num_mag_cal_params++;

	ids = (uint8_t *) calloc(n_imu, sizeof(uint8_t));
	i = 0;
	for (k = 1; k <= num_imus_id_params; k++){
		if (aux_string[k*PARAM_SLOT_BYTES + 8] != 255) {
			ids[i] = aux_string[k*PARAM_SLOT_BYTES + 8];
			i++;
		}
		if (aux_string[k*PARAM_SLOT_BYTES + 9] != 255) {
			ids[i] = aux_string[k*PARAM_SLOT_BYTES + 9];
			i++;
		}
		if (aux_string[k*PARAM_SLOT_BYTES + 10] != 255) {
			ids[i] = aux_string[k*PARAM_SLOT_BYTES + 10];
			i++;
		}
	}
	
	// Retrieve magnetometer calibration parameters
	mag_cal = (uint8_t *) calloc(n_imu, 3*sizeof(uint8_t));
	i = 0;
	for (k=1; k <= num_mag_cal_params; k++) {
		mag_cal[3*i + 0] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 8];
		mag_cal[3*i + 1] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 9];
		mag_cal[3*i + 2] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 10];
		printf("MAG PARAM: %d %d %d\n", mag_cal[3*i + 0], mag_cal[3*i + 1], mag_cal[3*i + 2]);
		i++;
		
		if (aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 7] == 6) {
			mag_cal[3*i + 0] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 11];
			mag_cal[3*i + 1] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 12];
			mag_cal[3*i + 2] = aux_string[num_imus_id_params*PARAM_SLOT_BYTES + k*PARAM_SLOT_BYTES + 13];
			printf("MAG PARAM: %d %d %d\n", mag_cal[3*i + 0], mag_cal[3*i + 1], mag_cal[3*i + 2]);
			i++;
		}
	}

	first_imu_parameter = 1 + num_imus_id_params + num_mag_cal_params + 1;
	imu_table = (uint8_t *) calloc(n_imu, 5*sizeof(uint8_t));
	for (i = 0; i < n_imu; i++){
		imu_table[5*i + 0] = aux_string[first_imu_parameter*PARAM_SLOT_BYTES + 8 + 50*i];
		imu_table[5*i + 1] = aux_string[first_imu_parameter*PARAM_SLOT_BYTES + 9 + 50*i];
		imu_table[5*i + 2] = aux_string[first_imu_parameter*PARAM_SLOT_BYTES + 10 + 50*i];
		imu_table[5*i + 3] = aux_string[first_imu_parameter*PARAM_SLOT_BYTES + 11 + 50*i];
		imu_table[5*i + 4] = aux_string[first_imu_parameter*PARAM_SLOT_BYTES + 12 + 50*i];
		printf("ID: %d - %d, %d, %d, %d, %d\n", ids[i], imu_table[5*i + 0], imu_table[5*i + 1], imu_table[5*i + 2], imu_table[5*i + 3], imu_table[5*i + 4]);
		
	}
	
	// Imu values is a (3 sensors x 3 axes + 4 + 1) x n_imu values
	imu_values = (float *) calloc(n_imu, 3*3*sizeof(float)+4*sizeof(float)+sizeof(float));
	
	if (!new_board && n_imu > 1){
		int idx = 0;
		for (i = 0; i < n_imu; i++) {
			if (imu_table[5*i + 3]){
				idx++;
			}
			if (idx > 0) {
				printf("\n[WARNING] Quaternion will not be read as it is computed only if there is ONLY 1 IMU connected to the board.\n\n");
				return -1;
			}
		}
	}

//////////////////////////////////////////// ---- START READING IMU DATA ---- //////////////////////////////////////////////
	
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2-t1);

	auto start = std::chrono::system_clock::now();
	auto end = start;
	std::chrono::duration<double> elapsed_mseconds_t = (end - start) * 1000;

	//Read Imu for 10s
	while(elapsed_mseconds_t.count() < 10000) {
		t1 = high_resolution_clock::now();	
		commGetImuReadings(&comm_settings_t, SoftHand_id, imu_table, mag_cal, n_imu, imu_values);     //ReadIMU
		t2 = high_resolution_clock::now();

		for (i = 0; i < n_imu; i++) {
			if (imu_table[5*i + 0]) {
				acc_value[cnt][index1] = imu_values[(3*3+4+1)*i];
				acc_value[cnt][index1+1] = imu_values[(3*3+4+1)*i+1];
				acc_value[cnt][index1+2] =imu_values[(3*3+4+1)*i+2];
			}	
			index1 = index1+3;		
		}
		
		time_span = duration_cast<duration<double>>(t2-t1);

		while (time_span.count() < 0.001) { // fa in modo che ogni ciclo di campionamento abbia la stessa durata (1ms)
			t2 = high_resolution_clock::now();
			time_span = duration_cast<duration<double>>(t2-t1);
		}
		cnt = cnt + 1;
		index1 = 0;
		end = std::chrono::system_clock::now();
		elapsed_mseconds_t = (end-start)*1000;
		tempo[cnt] = elapsed_mseconds_t.count();
	}

	closeRS485( &comm_settings_t );

//////////////////////////////////////////// ---- SAVE ACQUIRED DATA ON FILE ---- //////////////////////////////////////////////


	imu_file = fopen("imu_file.csv","w");
 
   	for (i = 0; i < n_imu; i++) {
		fprintf(imu_file,"ACC_X %d, ",ids[i]);
		fprintf(imu_file,"ACC_Y %d, ",ids[i]);
		fprintf(imu_file,"ACC_Z %d, ",ids[i]);
	}

   	fprintf(imu_file,"Time[ms]\n");

   	for (i = 0; i < cnt; i++){
		for (index1 = 0; index1 < n_imu * 3; index1++) {
			fprintf(imu_file,"%f, ", acc_value[i][index1]);
		}
		fprintf(imu_file," --- %.06f\n",tempo[i]);
	}
	fclose(imu_file);

	printf("Number of samples: %d\n", cnt);
        end = std::chrono::system_clock::now();
        elapsed_mseconds_t = (end - start) * 1000;
        i = i + 20;
        usleep(10000); //delay between samples


//////////////////////////////////////////// ---- PLOT ACQUIRED DATA ---- //////////////////////////////////////////////

	std::vector<double> x(cnt), y(cnt), z(cnt), t(cnt);

	for(int j = 0; j < n_imu; j++) {
		for(int i = 0; i < cnt; i++) {			
			x.at(i) = ((acc_value[i][j*3]));
			y.at(i) = ((acc_value[i][j*3+1]));
			z.at(i) = ((acc_value[i][j*3+2]));
			t.at(i) = (tempo[i]);
		}

		plt::figure_size(1200, 780);
		plt::title(std::to_string(j));
		plt::plot(t,x,{{"label","x"}});
		plt::plot(t,y,{{"label","y"}});
		plt::plot(t,z,{{"label","z"}});
		plt::legend("upper right");
		plt::show();

	}
	
  	closeRS485( &comm_settings_t );
   	std::cout << "\n- End of Code -\n"  << std::endl;
    return 0;
}


	
	
