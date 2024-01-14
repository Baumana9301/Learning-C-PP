//Chapter III - SelfTest 5 - Guess Output

#include <iostream>
using namespace std;

int main()
{
    int x = 0;

    cout << "Start\n";

    if (x <= 3)
    {
        if (x != 0)
            cout << "Hello from the second if.\n";
        else //(x == 0)
            cout << "Hello from the else.\n";
    }
    cout << "End\n";

    cout << "Start again\n";

    if (x > 3)
    {
        if (x != 0)
            cout << "Hello from the second if.";
        else //(x == 0)
            cout << "Hello from the else.\n";
    }

    cout << "End again\n";

    return 0;
}