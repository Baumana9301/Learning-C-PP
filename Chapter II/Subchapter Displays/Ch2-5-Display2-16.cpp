#include <iostream>
using namespace std;

int main()
{
    double balance = 50.00;
    int count = 0;

    cout << "This program tells you how long\n"
         << "it will take to accumulate a debt\n"
         << "of $100 starting with an initial balance\n"
         << "of $50 owed.\n"
         << "The interest rate is 2% per month.\n";

    while (balance < 100)
    {
        balance += (balance * 0.02);
        count++;
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "\nAfter " << count << " months, \n"
         << "your balance will be $" << balance << endl;
    
    return 0;

}