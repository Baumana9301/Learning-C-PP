/*Chapter II Practice Program III - Treadmill Conversion
This program reads in a value in mph and converts it into
minutes, seconds per mile for treadmill display*/

#include <iostream>
using namespace std;

int main()
{
    int tsec2, disp_min;
    double mph, minpm, tsec, disp_sec;

    cout << "Please enter a quantity in miles per hour: ";
    cin >> mph;

    minpm = (1/mph) * 60;
    tsec = minpm * 60;

    tsec2 = static_cast<int>(tsec);
    disp_min = tsec2 / 60;
    disp_sec = tsec2 % 60;

    cout << mph << " mph is equal to a pace of " << disp_min << " minutes "
         << "and " << disp_sec << " seconds.";
    
    return 0;
}