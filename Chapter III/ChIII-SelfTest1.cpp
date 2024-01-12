//Chapter III Self-Test I - Booleans

#include <iostream>
using namespace std;

int main()
{
    int count = 0, limit = 10;

    cout << ((count == 0) && (limit < 20));
    cout << (count == 0 && limit < 20);
    cout << ((limit > 20) || (count < 5));
    cout << (!(count == 12));
    cout << ((limit < 20) || ((limit / count) > 7));
    cout << ((limit < 0) && ((limit / count) > 7));
    cout << ((5 && 7) + (!6));

    return 0;
}
