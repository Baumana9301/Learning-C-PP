#include <iostream>
using namespace std;

int main()
{
    double x, y, z;
    
    cout << "Please input a number to serve as x: ";
    cin >> x;
    cout << "\nPlease input a number to serve as y: ";
    cin >> y;
    cout << "\nPlease input a number to serve as z: ";
    cin >> z;
    cout << "\nExpression 1: " << (3 * x) << endl;
    cout << "Expression 2: " << ((3 * x) + y) << endl;
    cout << "Expression 3: " << ((x + y) / 7) << endl;
    cout << "Expression 4: " << (((3 * x) + y) / (z + 2)) << endl;

    return 0;
}