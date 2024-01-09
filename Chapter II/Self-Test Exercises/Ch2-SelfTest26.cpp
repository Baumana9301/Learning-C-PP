#include <iostream>
using namespace std;

int main()
{
    int xvalue, yvalue;

    cout << "Consider the quadratic expression: x^2 - 4x +3.\n";
    cout << "Please enter an integer to be evaluated and determine to be (+), (-), or 0: ";
    cin >> xvalue;

    yvalue = ((xvalue * xvalue) - (4 * xvalue) + 3);

    if ((xvalue < 1) || (xvalue > 3))
        cout << "\nYvalue evaluates to " << yvalue << " which is (+)\n";

    else
        cout << "\nYvalue evalues to " << yvalue << " which is either (-) or 0.\n";

    return 0;

}