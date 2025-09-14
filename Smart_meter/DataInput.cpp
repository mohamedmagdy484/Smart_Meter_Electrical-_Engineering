#include "pch.h"
#include "DataInput.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;


         void DataInput(string LOADFilePath, vector<double>& currentValues, vector<double> &voltageValues, vector<double>& timeValues)
        {
            ifstream LOADFile;
            
            LOADFile.open(LOADFilePath);

            if (LOADFile.fail()) {
                cout << "ERROR: Could NOT open the file." << endl;

            }
            else {
                cout << "LOAD FILE IS OPENED" << " is opened" << endl;



                string line;
                double current, voltage;
                string timeValue;



                while (getline(LOADFile, line)) {
                    stringstream lineStream(line);

                    string TimeValue, currentValue, voltageValue;

                    getline(lineStream, TimeValue, ',');
                    getline(lineStream, voltageValue, ',');
                    getline(lineStream, currentValue);


                    double time = stod(TimeValue);
                    voltage = stod(voltageValue);
                    current = stod(currentValue);


                    timeValues.push_back(time);
                    voltageValues.push_back(voltage);
                    currentValues.push_back(current);
                }
            }
        }