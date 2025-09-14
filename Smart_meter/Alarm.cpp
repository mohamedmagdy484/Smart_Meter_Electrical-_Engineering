#include "pch.h"
#include "Alarm.h"

using namespace std;
const double frequency_lower_limit = 49.5;
const double frequency_upper_limit = 50.5;
//void soundAlarm(double current_time, double& last_alarm_time) {
    //if (current_time - last_alarm_time >= 1.0) {
//Beep(1000, 300);
//        last_alarm_time = current_time;*/
//    }
//}
void alarm(double max_limit, const vector<double>& Values, const vector<double>& timeValues, string name) {
    bool alarm = false;
    double last_alarm_time = -1.0;
    if (name == "voltageValues") {
        cout << "Voltage Exceedances:" << endl;

        for (size_t i = 0; i < Values.size(); i++) {
            if (Values[i] > max_limit) {
                cout << "Time = " << timeValues[i] << " s,voltage  = " << Values[i]
                    << " exceeds limit (" << max_limit << ")" << endl;
                alarm = true;
               // soundAlarm(timeValues[i], last_alarm_time);






            }
        }
        if (!alarm) {
            cout << "No voltage exceedances detected." << endl;
        }

    }




    else {
        cout << "current Exceedances:" << endl;
        for (size_t i = 0; i < Values.size(); i++) {
            if (Values[i] > max_limit) {
                cout << "Time = " << timeValues[i] << " s, current = " << Values[i]
                    << " exceeds limit (" << max_limit << ")" << endl;
                alarm = true;
              //  soundAlarm(timeValues[i], last_alarm_time);


            }
        }
        if (!alarm) {
            cout << "No current exceedances detected." << endl;
        }
    }
}
void peaktimes(vector<double>& peakTimes, vector<double>& voltageValues, vector<double>& timeValues)
{
    for (size_t i = 1; i < voltageValues.size() - 1; i++) {
        if (voltageValues[i] > voltageValues[i - 1] && voltageValues[i] > voltageValues[i + 1]) {

            if (!peakTimes.empty() && (timeValues[i] - peakTimes.back()) < 0.01) {
                continue;
            }
            peakTimes.push_back(timeValues[i]);
        }
    }


}
void freqalarm(vector<double>& peakTimes) {
    const double frequency_lower_limit = 49.5;
    const double frequency_upper_limit = 50.5;

    bool frequency_alarm = false;
    cout << "\nFrequency Exceedances:" << endl;

    double start_time = peakTimes[0];
    double current_frequency = 0;
    double last_alarm_time = -1.0;
    for (size_t i = 1; i < peakTimes.size(); i++) {
        double period = peakTimes[i] - peakTimes[i - 1];
        double frequency = 1.0 / period;

        if (i == 1) {
            current_frequency = frequency;
        }


        if (frequency < frequency_lower_limit || frequency > frequency_upper_limit) {
            if (fabs(frequency - current_frequency) > 1e-5) {
                cout << "Interval: Start = " << start_time << " s, End = " << peakTimes[i - 1] << " s, "
                    << "Frequency = " << current_frequency << " Hz exceeds limit ("
                    << frequency_lower_limit << " - " << frequency_upper_limit << " Hz)" << endl;
               // soundAlarm(peakTimes[i - 1], last_alarm_time);
                start_time = peakTimes[i - 1];
                current_frequency = frequency;
            }
        }
    }

    if (fabs(current_frequency - 1.0 / (peakTimes.back() - peakTimes[peakTimes.size() - 2])) > 1e-5) {
        cout << "Interval: Start = " << start_time << " s, End = " << peakTimes.back() << " s, "
            << "Frequency = " << current_frequency << " Hz exceeds limit ("
            << frequency_lower_limit << " - " << frequency_upper_limit << " Hz)" << endl;
      //  soundAlarm(peakTimes.back(), last_alarm_time);
    }





}