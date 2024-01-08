#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Please enter a whole number:\n";
    cin >> n1;
    cout << "Please enter another whole number:\n";
    cin >> n2;

    cout << n1 << " divided by " << n2 << " equals "
         << (n1 / n2) << " with a remainder of " << (n1 % n2) << endl;
    
    return 0;
}