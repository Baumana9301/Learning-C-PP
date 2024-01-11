/* Chapter II Prog. Proj. XIV - Time By Epoch
This program reads in the users current time
and calculates seconds since midnight.*/

#include <iostream>
using namespace std;

int main()
{
    int hour, minute, second, seconds_since_mid;

    do
    {
        cout << "Please enter the current hour of the day (0-23): ";
        cin >> hour;

    } while ((hour < 0) || (hour > 23));

    do
    {
        cout << "Please enter the current minute of the hour: ";
        cin >> minute;

    } while ((minute < 0) || (minute > 60));

    do
    {
        cout << "Please enter the current second of the minute: ";
        cin >> second;

    } while ((second < 0) || (second > 60));

    seconds_since_mid = ((hour * 60 * 60) + (minute * 60) + (second));

    cout << "\nTime in seconds since midnight: " << seconds_since_mid << endl;

    return 0;
    
}