#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 10, z = -42;

    while (x > 0)
    {
        cout << x << endl;
        x -= 3;
    }

    do {
        cout << y << endl;
        y -= 3;
    } while (y > 0);

    do {
        cout << z << endl;
        z -= 3;
    } while (z > 0);

    return 0;
}