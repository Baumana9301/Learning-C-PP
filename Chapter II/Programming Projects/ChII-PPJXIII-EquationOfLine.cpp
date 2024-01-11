/* Chapter II Programming Project XIII
Equation Of a Line in Slope Intercept Form */

#include <iostream>
using namespace std;

int main()
{
    double y2, y1, x2, x1, m, c;

    cout << "Please enter the value for x1: ";
    cin >> x1;
    cout << "Please enter the value for y1: ";
    cin >> y1;
    cout << "Please enter the value for x2: ";
    cin >> x2;
    cout << "Please enter the value for y2: ";
    cin >> y2;

    m = (y2 - y1) / (x2 - x1);
    cout << "\nThe slope of the line between the two points is " << m << endl;

    c = y1 - (m * x1);

    cout << "The equation of the line passing through both points "
         << "in slope intercept form is y = " << m << "x + " << c << endl;
    
    return 0;
}