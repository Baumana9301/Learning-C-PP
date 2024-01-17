/*Chapter III - SelfTest 21 - Increment Operators*/

#include <iostream>
using namespace std;

int main()
{
    int count = 3;
    while (count-- > 0)
    {
        cout << count << " ";
    }

    cout << endl;

    int count1 = 3;
    while (--count1 > 0)
    {
        cout << count1 << " ";
    }

    cout << endl;
    int n = 1;
    do
    {
        cout << n << " ";
    } while (n++ <= 3);
    
    cout << endl;

    int n1 = 1;
    do
    {
        cout << n1 << " ";
    } while (++n1 <= 3);
    
    return 0;
}