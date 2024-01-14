/*Chapter III - 3.2 - Display 3.5
Computing State Income Tax
-No tax on income before $1500
-5 percent tax on income btwn 15001 - 25000
-10 percent tax on income above 25000*/

#include <iostream>
using namespace std;

int main()
{
    double netIncome, fivePercentTax, tenPercentTax, totalTax;

    cout << "Please enter your net income: $";
    cin >> netIncome;

    if (netIncome < 15001)
    {
        totalTax = 0;
    }
    else if ((netIncome > 15000) && (netIncome < 25001))
    {
        fivePercentTax = (netIncome - 15000) * 0.05;
        totalTax = fivePercentTax;
    }
    else // (netIncome > 25000)
    {
        fivePercentTax = 10000 * 0.05;
        tenPercentTax = (netIncome - 25000) * 0.1;
        totalTax = fivePercentTax + tenPercentTax;
    }

    cout << "\nThe total state income tax owed is $" << totalTax << endl;

    return 0;
}