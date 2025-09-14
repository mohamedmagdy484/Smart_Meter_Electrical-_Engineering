#include "pch.h"
#include "TariffCalc.h"
double Tarrif_calc(double totalenergy)
{
    totalenergy = totalenergy * (30 * 24 * 3600 / 50.0);
    double cost_cent, cost_pound;

    if (totalenergy < 51)
        cost_cent = 58 * totalenergy;

    else if (totalenergy < 101)
        cost_cent = (50 * 58) + 68 * (totalenergy - 50);

    else if (totalenergy < 200)
        cost_cent = totalenergy * 83;

    else if (totalenergy < 350)
        cost_cent = (200 * 83) + 125 * (totalenergy - 200);

    else if (totalenergy < 650)
        cost_cent = (200 * 83) + (150 * 125) + 140 * (totalenergy - 350);

    else if (totalenergy < 1000)
        cost_cent = totalenergy * 150;

    else if (totalenergy >= 1000)
        cost_cent = totalenergy * 165 ;

    cost_pound = cost_cent / 100;


    return cost_pound;

}