#pragma once
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
using namespace std;
vector<double> powercalc(const vector<double>& voltage, const vector<double>& current);
double poweravg(const vector<double>& power);
double powertot(const vector<double>& power);
