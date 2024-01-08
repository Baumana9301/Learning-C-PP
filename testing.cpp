#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Please enter a number: ";
    cin >> n1;
    cout << "Please enter another number: ";
    cin >> n2;

    if ((n1 == 1) && (n2 == 1))
        cout << "Both of the numbers are 1.";
    else
        cout << "Neither of the numbers are 1.";

    return 0;    
}