#include "pch.h"
#include "PowerCalc.h"
vector<double> powercalc(const vector<double>& voltage, const vector<double>& current)
// i took it by refrence so it can not be changed even by mistake
{

    if (voltage.size() != current.size())
        // making sure that every current has its own voltage at that time
    {
        cout << "Make sure that the inputs are valid." << endl;
    }

    vector<double> power;
    //for loop so i  can push back the vector with the results
    for (int i = 0; i < voltage.size(); i++) {
        double p = voltage[i] * current[i];
        power.push_back(p);
    }
    return power;
}
double powertot(const vector<double>& power)
{
    double sum = 0;
    for (int i = 0; i < power.size(); i++)
    {
        sum += power[i];
    }
    return sum ;
}
double poweravg(const vector<double>& power)
{
    double sum = 0;
    for (int i = 0; i < power.size(); i++)
    {
        sum += power[i];
    }
    return(sum / power.size());
}