#include <iostream>
using namespace std;

int main()
{
    char ans;

    do
    {
        cout << "Hello\n";
        cout << "Do you want another greeting?\n"
             << "Press y for yes, n for no,\n"
             << "and then press return.\n";
        cin >> ans;

    } while ((ans == 'y') || (ans == 'Y'));

    cout << "Goodbye\n";

    return 0;
}