#include <iostream>
using namespace std;

int main()
{
    int xvalue, yvalue, result;

    cout << "Consider the quadratic expression x^2 - x - 2\n";
    cout << "Please input an integer to test if expression is (+) or (-) at value: ";
    cin >> xvalue;

    yvalue = ((xvalue * xvalue) - xvalue - 2);

    if ((xvalue < -1) || (xvalue > 2))
        cout << "\nYvalue evaluated to " << yvalue << " which is positive.\n";
    else
        cout << "\nYvalue evaluated to " << yvalue << " which is either 0 or negative.\n";
    
    return 0;
}