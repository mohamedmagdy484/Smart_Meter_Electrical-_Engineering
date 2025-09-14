#pragma once
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
#include <filesystem>
#include "Form1.h"
#include"DataInput.h"
#include "PowerFactorCalc.h"
#include "SignalFiltering.h"
#include "TariffCalc.h"
#include "PowerCalc.h"
#include "EnergyCalc.h"
#include "Alarm.h"
#include "PeriodsCalc.h"

using namespace std;
void datalog(string path, vector<double> Current, vector<double>Voltage, vector<double>timeValues);
