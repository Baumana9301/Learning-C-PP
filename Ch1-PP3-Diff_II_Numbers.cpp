#include <iostream>
using namespace std;

int main()
{
    int num1, num2, numdiff;

    cout << "Please enter an integer:\n";
    cin >> num1;
    cout << "Please enter another integer:\n";
    cin >> num2;
    numdiff = num1 - num2;
    cout << "The difference of ";
    cout << num1;
    cout << " and ";
    cout << num2;
    cout << " is: ";
    cout << numdiff;

    return 0;
}