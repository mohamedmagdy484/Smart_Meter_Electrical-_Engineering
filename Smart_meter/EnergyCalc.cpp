#include "pch.h"
#include "EnergyCalc.h"
double calculateEnergy(const vector<double>& power, double t_sample) {

    double totalEnergy = 0.0;
    for (size_t i = 0; i < power.size(); i++) {
        totalEnergy += power[i] * t_sample;
    }

    // calculate average energy
    double energyAverage = totalEnergy / power.size();

    cout << "Total Energy: " << totalEnergy << " Joules" << endl;
    cout << "Energy Average: " << energyAverage << " Joules" << endl;

    return (totalEnergy/3600000);
}
