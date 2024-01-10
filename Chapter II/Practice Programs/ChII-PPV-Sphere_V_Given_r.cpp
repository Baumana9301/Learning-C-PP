/* Chapter II Programming Project V - Sphere Volume Given Radius
This project calculates the volume of a sphere given its radius.*/

#include <iostream>
using namespace std;

int main()
{
    double r, V;
    
    cout << "Enter radius of a sphere.\n";
    cin >> r;

    V = (4.0/3.0) * 3.1415 * (r * r * r);

    cout << "The volume is " << V << " units cubed.\n";

    return 0;
}