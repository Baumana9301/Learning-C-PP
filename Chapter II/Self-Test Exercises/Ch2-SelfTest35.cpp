//Self-Test 35

#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Input either -7 or 7 for x: ";
    cin >> x;

    if (x < 0)
    {
        x = 7;
        cout << "\nx is now positive.\n";
    }
    else
    {
        x = -7;
        cout << "\nx is now negative.\n";
    }

    return 0;
}