#include "pch.h"
#include "DataLogging.h"
void datalog(string path, vector<double> Current, vector<double>Voltage, vector<double>timeValues)
{
    ofstream outputFile(path);
    if (outputFile.fail()) {
        cout << "ERROR: Could NOT create the output file." << endl;
       
    }
    outputFile << "Time, Voltage, Current\n";
    for (size_t i = 0; i < timeValues.size(); i++) {
        outputFile << timeValues[i] << "," << Voltage[i] << "," << Current[i] << "\n";
    }
    outputFile.close();    
}




