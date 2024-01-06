#include <iostream>
using namespace std;

int main()
{
    int n1, n2, sum;

    double length;

    int product, n;

    cout << "Please enter an integer:\n";
    cin >> n1;
    cout << "Please enter another integer:\n";
    cin >> n2;
    
    sum = n1 + n2;

    cout << "The sum of " << n1 << " and " << n2 << " is " << sum << "\n";
    cout << "\n";

    cout << "Please enter a number for an arbitrary length:\n";
    cin >> length;

    length = length + 8.3;

    cout << "The length you input plus 8.3 equals " << length << "\n";
    cout << "\n";

    cout << "Please enter an integer for an arbitrary product:\n";
    cin >> product;
    cout << "Please enter an integer to multiply with product:\n";
    cin >> n;

    product = product * n;

    cout << "The new product is: " << product << "\n";
    cout << "\n";

    return 0;
}