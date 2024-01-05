#include <iostream>
using namespace std;

int main()
{
    int num_quarters, num_dimes, num_nickels, total_cents;

    cout << "Please enter the quantity of quarters:\n";
    cin >> num_quarters;
    cout << "Please enter the quantity of dimes:\n";
    cin >> num_dimes;
    cout << "Please enter the quantity of nickels:\n";
    cin >> num_nickels;
    total_cents = (num_quarters * 25) + (num_dimes * 10) + (num_nickels * 5);
    cout << "You have ";
    cout << total_cents;
    cout << " cents.";

    return 0;
}