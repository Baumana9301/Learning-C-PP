/* Chapter II Prog. Proj. XI - Sound Velocity
This project reads in a temperature range and 
outputs the velocity of sound at each temp. in
the range incrementing by 1 degree C. */

#include <iostream> 
using namespace std;

int main()
{
    double counter, lowerbound, upperbound, velocity_mps;

    cout << "Please enter the starting temperature (C): ";
    cin >> lowerbound;
    counter = lowerbound;
    cout << "Please enter the ending temperature: ";
    cin >> upperbound;
    cout << "\n";

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    while (counter <= upperbound)
    {
        velocity_mps = 331.3 + (0.61 * counter);
        cout << "At " << counter << " degrees Celsius"
             << " the velocity of sound is " << velocity_mps
             << " m/s\n";
        counter++;
    }
    return 0;
}