/*Chapter II Prog. Proj. IV
Negotiating a Consumer Loan (Discount Installment*)
Program reads in the amount the consumer needs
    to receive, the int. rate, and duration of
    loan in months - then calculates face value
    required and monthly payment.*/

#include <iostream>
using namespace std;

int main()
{
    int loan_duration;
    double money_upfront, interest_rate, face_value, monthly_payment, loan_period;
    char selection;

    do
    {
        cout << "Please enter the amount of $ needed upfront: $";
        cin >> money_upfront;
        cout << "\nPlease enter the interest rate of the loan (in decimal form): ";
        cin >> interest_rate;
        cout << "\nPlease enter the duration of the loan in months: ";
        cin >> loan_duration;

        loan_period = loan_duration / 12.0;
        face_value = money_upfront / (1 - (interest_rate * loan_period));
        monthly_payment = face_value / loan_duration;

        cout << "\nThe face value required is $" << face_value << endl;
        cout << "Your monthly payment will be $" << monthly_payment << endl;

        cout << "\nWould you like to calculate again? "
             << "Enter 'y' for yes and 'n' for no.\n";
        cin >> selection;

    } while ((selection == 'y' || selection == 'Y'));

    cout << "\nEnjoy your day.\n";
    
    return 0;
}