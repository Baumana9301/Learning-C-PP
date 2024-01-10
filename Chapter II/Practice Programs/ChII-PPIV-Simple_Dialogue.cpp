/* Chapter II Practice Program IV - Simple Dialogue
This program prompts about the users day and requires 
a 'y' or 'n' answer.*/

#include <iostream>
using namespace std;

int main()
{
    char response;

    do
    {
        cout << "Hello!\n";
        cout << "Are you having a good day today?\n"
             << "Please reply with 'y' for yes and 'n' for no.\n";
        cin >> response;
        
    } while (!((response == 'y') || (response == 'n')));
    
    if (response == 'y')
        cout << "I'm glad to hear that.";
    else
        cout << "I hope your day gets better.";

    return 0;

}