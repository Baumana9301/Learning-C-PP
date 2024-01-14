/* Chapter III - 3.2 - Display 3.8
Program to compute bill for wholesale or
retail purchase */

#include <iostream>
using namespace std;

int main()
{
    const double TAX_RATE = 0.05;
    char saleType;
    int number;
    double price, total;

    cout << "Enter 'R' if this was a retail purchase or "
         << "'W' if this was a wholesale purchase: ";
    cin >> saleType;

    cout << "\nEnter the number of items purchased: ";
    cin >> number;

    cout << "\nEnter the price: $";
    cin >> price;

    if ((saleType == 'w') || (saleType == 'W'))
    {
        total = number * price;
    }
    else if ((saleType == 'r') || (saleType == 'R'))
    {
        double subtotal;
        subtotal = number * price;
        total = subtotal + (subtotal * TAX_RATE);
    }
    else //!((saleType == 'W') || (saleType == 'N'))
    {
        cout << "\nInvalid input.";
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << endl << number << " items at $" << price << endl;
    cout << "Total bill: $" << total << endl;

    if ((saleType == 'R') || (saleType == 'r'))
        cout << "Sales tax included.\n";
    
    return 0;
}