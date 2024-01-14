//Chapter III - SelfTest6 - Guess Output

#include <iostream>
using namespace std;

int main()
{
    int extra;
    char selection;

    cout << "Entering an int "
         << "will tell you if program classifies it as "
         << "small, medium, or large.\n";
    do
    {
        cout << "\nPlease enter an int: ";
        cin >> extra;
        cout << "\n" << extra << " is ";
        if (extra < 0)
            cout << "small";
        else if (extra == 0)
            cout << "medium";
        else //(extra > 0)
            cout << "large";
        
        cout << "\n";
        cout << "\nEnter 'y' to run again, else 'n'.\n";
        cin >> selection;
    } while ((selection == 'y') || (selection == 'Y'));
    
    return 0;
}