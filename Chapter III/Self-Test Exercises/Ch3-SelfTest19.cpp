/* Chapter III - SelfTest19 - Local Variables*/
#include <iostream>
using namespace std;

int main()
{
    int number = 22;
    {
        int number = 42;
        cout << number << endl;
    }
    cout << number << endl;

    return 0;
}