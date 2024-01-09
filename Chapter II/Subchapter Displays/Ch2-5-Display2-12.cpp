#include <iostream>
using namespace std;

int main()
{
    int countdown;

    cout << "Please type in how many greetings you want: ";
    cin >> countdown;

    while (countdown > 0)
    {
        cout << "Hello!\n";
        countdown -= 1;
    }

    cout << "That's all!";

    return 0;
}