#include <iostream>
#include <string>
using namespace std;

string calculate_time(int examHour, int examMinute, int arrivalHour, int arrivalMinute) {
    int examTotalMinutes = examHour * 60 + examMinute;
    int arrivalTotalMinutes = arrivalHour * 60 + arrivalMinute;
    int timeDifference = arrivalTotalMinutes - examTotalMinutes;
    string result;

    if (timeDifference > 0) {
        result = "Late\n";
        if (timeDifference >= 60) {
            result += to_string(timeDifference / 60) + " hours and " + to_string(timeDifference % 60) + " minutes after the start";
        } else {
            result += to_string(timeDifference) + " minutes after the start";
        }
    } 
    else if (timeDifference >= -30) {
        result = "On time\n";
        if (timeDifference < 0) {
            result += to_string(-timeDifference) + " minutes before the start";
        }
    } 
    else {
        result = "Early\n";
        int earlyMinutes = -timeDifference;
        if (earlyMinutes >= 60) {
            result += to_string(earlyMinutes / 60) + " hours and " + to_string(earlyMinutes % 60) + " minutes before the start";
        } else {
            result += to_string(earlyMinutes) + " minutes before the start";
        }
    }

    return result;
}

 main() {
   int hours=0, min=0, stuhour=0, stumin=0;
    cout << "Enter the Exam start time (in hours):";
    cin >> hours;
    cout << "Enter the Exam start time (in minutes):";
    cin >> min;
    cout << "Enter the time arrival on center(in hours):";
    cin >> stuhour;
    cout << "Enter the time arrival on center(in minutes):";
    cin >> stumin;
    string answer;
    answer=calculate_time( hours,  min,  stuhour,stumin);
    cout<<answer;
}