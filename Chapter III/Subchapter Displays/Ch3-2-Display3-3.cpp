/*Chapter III - 3.2 - Display 3.3
An if-else Statement WIthin an if Statement*/

#include <iostream>
using namespace std;

int main()
{
    int count, score;

    cout << "Please input a count: ";
    cin >> count;

    cout << "\nPlease input a score: ";
    cin >> score;

    if (count > 0)
    {
        if (score > 5)
            cout << "\nCount > 0 and score > 5\n";
        
        else
            cout << "\nCount > 0 and score < 5\n";
    }
    
    else
        cout << "\nCount < 0\n";

    return 0;
}
