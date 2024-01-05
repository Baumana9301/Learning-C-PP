#include <iostream>
using namespace std;

int main()
{
    int num1, num2, numquotient;

    cout << "Please enter an integer:\n";
    cin >> num1;
    cout << "Please enter another integer:\n";
    cin >> num2;
    numquotient = num1 / num2;
    cout << "The quotient of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is: ";
    cout << numquotient;

    return 0;
}