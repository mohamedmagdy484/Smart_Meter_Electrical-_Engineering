#include "pch.h"
#include "Alarm_NumsOfSamples.h"
int find_start_index(const vector<double>& arr) {
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] * arr[i - 1] <= 0 && abs(arr[i]) > 0.01) {
            return i;
        }
    }
    return -1;
}

cycle_values find_number_of_samples(vector<double>& arr, int start_index) {
    cycle_values cycle;
    bool find_start = false;
    bool find_end = false;

    for (int i = start_index; i < (size_of_load - 1) && (!find_start); i++) {
        if (arr[i + 1] < arr[i] && arr[i] * arr[i - 1] <= 0 && arr[i + 2] < 0) {
            cycle.indexf1 = i;
            find_start = true;

            for (int j = cycle.indexf1 + 1; j < (size_of_load - 1) && (!find_end); j++) {
                if (arr[j] < arr[j - 1] && arr[j] * arr[j - 1] <= 0 && arr[j + 1] < 0) {
                    cycle.indexf2 = j;
                    find_end = true;
                }
            }
        }
    }

    cycle.no_of_samples = cycle.indexf2 - cycle.indexf1;
    cycle.freq = 1 / (cycle.no_of_samples * T_sampling);

    cout << "FROM: " << cycle.indexf1 << " ----> " << cycle.indexf2 << "  Number of samples = " << cycle.no_of_samples << " ----> Frequency = " << cycle.freq << " Hz" << endl;
    return cycle;
}