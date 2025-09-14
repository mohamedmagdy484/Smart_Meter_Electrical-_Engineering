#include "pch.h"
#include "PeriodsCalc.h"
vector<double>periods(vector<double> peaktimes)
{
    vector<double> Periodsvec;
    for (size_t i = 1; i < peaktimes.size(); ++i) {
        double period = peaktimes[i] - peaktimes[i - 1];
        Periodsvec.push_back(period);
    }
    return Periodsvec;
}