#include <iostream>
using namespace std;

int main()
{
    int num1, num2, numsum, numproduct;

    cout << "Please enter an integer:\n";
    cin >> num1;
    cout << "Please enter another integer:\n";
    cin >> num2;
    numsum = num1 + num2;
    numproduct = num1 * num2;
    cout << "The sum of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is: ";
    cout << numsum;
    cout << "\nThe product of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is: ";
    cout << numproduct;
    cout << "\n";

    return 0;
}