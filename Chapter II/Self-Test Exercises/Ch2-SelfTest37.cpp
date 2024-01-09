//SelfTest 37
//Converts gallons to L

#include <iostream>
using namespace std;

int main()
{
    const double L_PER_G = 3.78533;
    double liters, gallons;

    cout << "Please input the number of gallons to be converted: ";
    cin >> gallons;

    liters = gallons * (3.78533);

    cout << "\n" << gallons << " gallons is equivalent to "
         << liters << " liters.\n";

    return 0;

}