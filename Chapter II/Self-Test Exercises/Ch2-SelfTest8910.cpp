#include <iostream>
using namespace std;

int main()
{
    int the_number;
    double n1;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout << "The answer to the question of\n"
         << "Life, the Universe, and Everything is 42." << endl;

    cout << "\nPlease enter a whole number: ";
    cin >> the_number;
    cout << endl;

    cout << "Please enter a number: ";
    cin >> n1;
    cout << endl;

    cout << "The number you entered formatted to 3 decimal places: "
         << n1 << endl;

    cout << endl;

    return 0;
}