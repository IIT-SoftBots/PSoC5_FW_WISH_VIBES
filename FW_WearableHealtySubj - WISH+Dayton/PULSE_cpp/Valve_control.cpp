/*
 g++ Valve_control.cpp QB_lib/cp_communications.cpp QB_lib/qbmove_communications.cpp -std=c++11 -I/usr/include/python2.7 -lpython2.7 -o Valve_control 
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

	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	duration<double> time_span = duration_cast<duration<double>>(t2-t1);

	auto start = std::chrono::system_clock::now();
	auto end = start;
	std::chrono::duration<double> elapsed_mseconds_t = (end - start) * 1000;

	
////////////////////////////////////////////////// --- OPEN/CLOSE VALVE ---- /////////////////////////////////////////////////////
     
	// 10s read residual current
  	start = std::chrono::system_clock::now();
	end = start;
    elapsed_mseconds_t = (end - start) * 1000;

	while(elapsed_mseconds_t.count() < 10000) {
		// OPEN THE VALVE sending '0'
		commActivate(&comm_settings_t, Pulse_id, 0);    // Uses commActivate to drive the valve
   		std::cout << "\n- open -\n"  << std::endl;
		usleep(1000000);

		// CLOSE THE VALVE sending '1'
		commActivate(&comm_settings_t, Pulse_id, 1);
		usleep(1000);
		commGetActivate(&comm_settings_t, Pulse_id, &aux_char);
   		std::cout << "\n- closed -\n"  << std::endl;
		usleep(1000000);

		end = std::chrono::system_clock::now();
		elapsed_mseconds_t = (end - start) * 1000;
	}
	
  	closeRS485( &comm_settings_t );
   	std::cout << "\n- End of Code -\n"  << std::endl;
    return 0;
}


	
	
