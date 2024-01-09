#include <iostream>
using namespace std;

int main()
{
    int temperature_F, pressure_psi;

    cout << "Please enter the temperature (F): ";
    cin >> temperature_F;
    cout << "Please enter the pressure (psi): ";
    cin >> pressure_psi;

    if ((temperature_F >= 100) || (pressure_psi >= 200))
        cout << "\nWARNING\n";
    else
        cout << "\nOK\n";
    
    return 0;
}