#include <iostream>
using namespace std;

int main()
{
    double savings, expenses;

    cout << "Please type your savings: $";
    cin >> savings;
    cout << "\nPlease type your expenses: $";
    cin >> expenses;

    if (savings >= expenses)
    {
        cout << "\nSolvent\n";
        savings -= expenses;
        expenses = 0;
        cout << "Updated Savings $" << savings << endl;
        cout << "Updated Expenses: $" << expenses << endl;
    }
    else
        cout << "\nBankrupt.\n";

    return 0;
}