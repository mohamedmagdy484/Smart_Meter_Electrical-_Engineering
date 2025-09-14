#include "pch.h"

using namespace System;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }


#include<fstream>
#include<sstream>
#include<iostream>
#include<vector>
#include <string>
#include <filesystem>
#include "Form1.h"
#include"DataInput.h"
#include "PowerFactorCalc.h"
#include "SignalFiltering.h"
#include "TariffCalc.h"
#include "PowerCalc.h"
#include "EnergyCalc.h"
#include "Alarm.h"
#include "PeriodsCalc.h"
#include "DataLogging.h"

using namespace std;

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());

   vector<double> currentValues;
   vector<double> voltageValues;
   vector<double> timeValues;
   vector<double> filteredCurrent(currentValues.size());
   vector<double> filteredVoltage(voltageValues.size());
   const double pi = 3.14159;
   const double Tsampling = 0.0001;
   double cutoff_frequency = 2 * pi * 50.0;

   

 
  return 0;
}