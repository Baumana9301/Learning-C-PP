/* Chapter II Practice Program II - Powers of Numbers
This programming project reads in a base number (double)
    and an exponent (int) and then outputs the value.*/

#include <iostream>
using namespace std;

int main()
{
    int exponent, counter=1;
    double n1, result;

    cout << "Please enter a base number for the expression: ";
    cin >> n1;
    cout << "\nPlease enter an exponent for the expression(+int): ";
    cin >> exponent;

    if (exponent == 0)
        result = 1;
    else
    {
        result = n1;
        while (counter < exponent)
        {
            result *= n1;
            counter++;
        }
    }

    cout << n1 << " to the power of " << exponent << " is equal to " << result << endl;

    return 0;
    
}