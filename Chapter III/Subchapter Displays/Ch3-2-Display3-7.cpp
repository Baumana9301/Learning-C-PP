/*Chapter III - 3.2 - Display 3.7
Program to give out homework assignment info*/

#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << endl
             << "Choose 1 to see the next homework assignment.\n"
             << "Choose 2 for your grade on the last assignment.\n"
             << "Choose 3 for assignment hints.\n"
             << "Choose 4 to exit this program.\n"
             << "Enter your choice and press Return: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                //code to display next assignment would go here
                break;
            
            case 2:
                //code to ask for student number and give grade
                break;
            
            case 3:
                //code to display a hint for current assignment
                break;
            
            case 4:
                cout << "End of Program.\n";
                break;
            
            default:
                cout << "Not a valid choice.\n"
                     << "Choose again.\n";
        }
    } while (choice != 4);

    return 0;
    
}