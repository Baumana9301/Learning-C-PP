#include <iostream>
using namespace std;

int main()
{
    int exam, programs_done;

    cout << "Please enter your exam score: ";
    cin >> exam;

    cout << "\nPlease enter the amount of programs completed: ";
    cin >> programs_done;

    if ((exam >= 60) && (programs_done >= 20))
        cout << "\nYou passed.\n";
    else
        cout << "\nYou failed.\n";
    
    return 0;
}