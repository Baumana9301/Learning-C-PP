/*Chapter III - 3.2 - Display 3.4
Racecar example code
Checks fuel gauge and if low, notifies driver
If not, tells driver not to stop for pit stop*/

#include <iostream>
using namespace std;

int main()
{
    double fuelGaugeReading;

    cout << "Enter the fuel gauge reading: ";
    cin >> fuelGaugeReading;

    if (fuelGaugeReading < 0.75)
    {
        if (fuelGaugeReading < 0.25)
            cout << "Fuel very low. Caution!";
    }
    else 
        cout << "Fuel over 0.75. Don't stop!";

    return 0;
}