#include <iostream>
#include <unistd.h> 
#include <ctime>
using namespace std;

int main() {
    short hours, minutes, seconds;
    int time;

	do {
        cout << "Enter hours (0-23): ";
        cin >> hours;
    } while (hours < 0 || hours > 23);
    
    do {
        cout << "Enter minutes (0-59): ";
        cin >> minutes;
    } while (minutes < 0 || minutes > 59);

    do {
        cout << "Enter seconds (0-59): ";
        cin >> seconds;
    } while (seconds < 0 || seconds > 59);

    time = hours * 3600 + minutes * 60 + seconds;

    for (int i = time; i > 0; --i) {
        system("cls"); 
        cout << "Time Remaining: " << i / 3600 <<" : " << (i/60) % 60 <<" : " <<  i % 60 << "\n";
        sleep(1); 
    }

    system("cls"); 
    cout << "==============================\n         Timer ended!\a\n     Lasted for " << time << " seconds\n==============================\n";

    return 0;
}
