#pragma once
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <cmath>
//#include <windows.h>


using namespace std;

const double T_sampling = 0.0001;
//void soundAlarm(double current_time, double& last_alarm_time);
void alarm(double max_limit, const vector<double>& Values, const vector<double>& timeValues, string name);
void peaktimes(vector<double>& peakTimes, vector<double>& voltageValues, vector<double>& timeValues);
void freqalarm(vector<double>& peakTimes);
