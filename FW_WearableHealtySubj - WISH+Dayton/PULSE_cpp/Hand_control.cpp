/*
 g++ Hand_control.cpp QB_lib/cp_communications.cpp QB_lib/qbmove_communications.cpp -std=c++11 -I/usr/include/python2.7 -lpython2.7 -o Hand_Control
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

void sleep_us(uint32_t microseconds){  // fa la stessa cosa di usleep(), solo che questa funziona anche su windows
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

	//////////////////////////////////////////// ---- Read Data from file ---- //////////////////////////////////////////////

    // Read a .csv file containing sinusoid samples (absolute values)
    string filename = "sine.csv";
    vector<vector<string>> content;
    vector<string> row;
    std::vector<float> sine(10000);
    string line, word;
    fstream file (filename, ios::in);

    if(file.is_open())
    {
        while(getline(file, line))
        {
            row.clear();
            stringstream str(line);
            while(getline(str, word, ','))
                row.push_back(word);
                content.push_back(row);
        }
         cout<<"\nData imported succesfully!\n\n";
    }
    else{
        cout<<"Could not open the file\n";
        }
 
    for(int i = 0; i < content.size(); i++)
    {
        sine[i] = std::stod(content[i][0]);
    }

	plt::figure_size(1200, 780);
	plt::plot(sine);
	plt::show();

////////////////////////////////////////////// ---- OPEN RS485 COMMUNICATION ---- /////////////////////////////////////////////////////
   
   	openRS485( &comm_settings_t , COMPort, 2000000) ;       // QB Board Opening
	sleep_us(500000);

	auto start = std::chrono::system_clock::now();
	auto end = start;
	std::chrono::duration<double> elapsed_mseconds_t = (end - start) * 1000;

////////////////////////////////////////// --- CONTROL SOFTHAND ---- /////////////////////////////////////////////////////
    i = 0;
	
	// 10s drive SOFTHAND
	start = std::chrono::system_clock::now();
	end = start;
    elapsed_mseconds_t = (end - start) * 1000;
	while(elapsed_mseconds_t.count() < 30000) {
        inputs[0] = sine[i] * 19000; // SH input
		inputs[1] = 0; // null
        commSetInputs(&comm_settings_t, SoftHand_id, inputs); // Send inputs to device

        end = std::chrono::system_clock::now();
        elapsed_mseconds_t = (end - start) * 1000;
        i = i + 1;
        sleep_us(10000); //delay between samples
	}

	inputs[0] = 0; // Reset inputs
    inputs[1] = 0;
    commSetInputs(&comm_settings_t, SoftHand_id, inputs); // Send reset to device
		
  	closeRS485( &comm_settings_t );
   	std::cout << "\n- End of Code -\n"  << std::endl;
    return 0;
}


	
