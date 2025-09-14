#pragma once
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
#include<cmath>

using namespace std;
double Vrms(const vector<double>& voltage);
double Irms(const vector<double>& voltage);
double PowerFactor(double Pavg, double irms, double vrms);