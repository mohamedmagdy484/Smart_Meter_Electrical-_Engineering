#pragma once
#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
using namespace std;
void Low_pass_filter(const vector<double>& input, double cutoff_angular_frequency, double Tsampling, vector<double>& filtered);