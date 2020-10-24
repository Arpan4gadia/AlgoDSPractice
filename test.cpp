#include <iostream>
using namespace std;

int time() {
    
    int nSeconds = 0;

    cout <<  "Enter nSeconds: ";
    cin >> nSeconds;

    if (nSeconds < 60) {
        cout << nSeconds << "seconds." << endl;
    }

    else {
        int days = nSeconds / 84600;
        int hours = nSeconds / 3600;
        int minutes = nSeconds / 60;
        int seconds = nSeconds % 60;

        if (seconds >= 60) {
            minutes++;
            int difference = seconds - 60;
            seconds = difference;
        }

        else if (minutes >= 60) {
            hours++;
            int difference1 = minutes - 60;
            minutes = difference1;
        }

        else if (hours >= 24) {
            days++;
            int difference2 = hours -24;
            hours = difference2;
        }

        if (days <= 0) {
            cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds, ";
        }

        else if (hours <= 0) {
            cout << minutes << " minutes, " << seconds << " seconds, ";
        }

        else {
            cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds.";
        }
        

    }

    return 0;
}

int main() {
    time();
}