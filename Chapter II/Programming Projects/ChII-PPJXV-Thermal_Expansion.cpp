/* Chapter II Prog. Proj. XV - Thermal Expansion
This program reads in a materials coeff. for linear
expansion, the change in temp. (C), and the materials
initial length (m). It then outputs the linear displacement.
*/

#include <iostream>
using namespace std;

int main()
{
    double LEcoeff, L0, changeTemp, LinDisplace;

    cout << "Please enter the materials Linear Expansion coefficient: ";
    cin >> LEcoeff;
    cout << "Please enter the initial length of the material (m): ";
    cin >> L0;
    cout << "Please enter the change in temperature (C): ";
    cin >> changeTemp;

    LinDisplace = LEcoeff * L0 * changeTemp;
    
    if (LinDisplace > 0)
        cout << "\nThe material will expand by " << LinDisplace
             << "meters.\n";
    else
        cout << "\nThe material will contract by " << (LinDisplace * -1)
             << " meters.\n";

    return 0;

}