/*Chapter II Programming Project II
Carpet Calculations 

A store sells carpers for $2.75 per m
and supplies a discount of 15% off every meter if
customer buys more than 10 m. Read in length
desired to buy and output total cost.*/

#include <iostream>
using namespace std;

int main()
{
    const double CARPET_PRICE = 2.75, CARPET_DISCOUNT = 0.15;
    const double DISCOUNTED_PRICE = 2.75 - (2.75 * 0.15);
    double l_carpet, total_price;

    cout << "Please enter the amount of carpet you'd like to purchase(in m): ";
    cin >> l_carpet;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    if (l_carpet > 10)
    {
        total_price = (10 * CARPET_PRICE) + ((l_carpet - 10) * DISCOUNTED_PRICE);
        cout << l_carpet << "m of carpet will cost: $"
             << total_price;
    }

    else
    {
        total_price = (l_carpet * CARPET_PRICE);
        cout << l_carpet << "m of carpet will cost: $"
             << total_price;
    }

    return 0;
}