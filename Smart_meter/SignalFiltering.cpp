#include "pch.h"
#include "SignalFiltering.h"
void Low_pass_filter(const vector<double>& input, double cutoff_angular_frequency, double Tsampling, vector<double>& filtered) {
    int Number_Of_Points = input.size();
    filtered[0] = input[0];
    for (int i = 1; i < Number_Of_Points; i++) {
        filtered[i] = (filtered[i - 1] + cutoff_angular_frequency * Tsampling * input[i]) / (1 + cutoff_angular_frequency * Tsampling);
    }
}
