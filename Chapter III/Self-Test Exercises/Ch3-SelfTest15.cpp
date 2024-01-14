/*Chapter III - SelfTest 15 - Switch Output*/

#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << endl << "---FRANKS FLUCTUATING CUISINE---\n"
             << "1. ROAST BEEF\n"
             << "2. ROAST WORMS\n"
             << "3. CHOCOLATE ICE CREAM\n"
             << "4. ONION ICE CREAM\n"
             << "5. SIDE OF EYES\n"
             << "6. SIDE OF FRIES\n"
             << "7. DONE ORDERING\n"
             << "Please enter your selection (1-7)> ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "You ordered ROAST BEEF.\n";
                break;
            case 2:
                cout << "You ordered ROAST WORMS.\n";
                break;
            case 3:
                cout << "You ordered CHOCOLATE ICE CREAM.\n";
                break;
            case 4:
                cout << "You ordered ONION ICE CREAM.\n";
                break;
            case 5:
                cout << "You ordered SIDE OF EYES.\n";
                break;
            case 6:
                cout << "You ordered SIDE OF FRIES.\n";
                break;
            case 7:
                cout << "Exiting the menu!\n";
                break;
            default:
                cout << "Option not valid pay attention.\n";
        }
    } while (choice != 7);

    cout << "Thanks for choosing Franks Flucatuating Cuisine!\n";

    return 0;
}