#include "pch.h"
#include "PowerFactorCalc.h"

double Vrms(const vector<double>& voltage) 
{
    double sum = 0;
    for (int i = 0; i < voltage.size(); i++)
    {
        sum += voltage[i]*voltage[i];
    }

    return(sqrt(sum / voltage.size()));

}

double Irms(const vector<double>& current)
{
    double sum = 0;
    for (int i = 0; i < current.size(); i++)
    {
        sum += current[i] * current[i];
    }

    return(sqrt(sum / current.size()));

}
double PowerFactor(double Pavg, double irms, double vrms)
{
    return(Pavg / (irms * vrms));

}


