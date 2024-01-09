#include <iostream>
using namespace std;

int main()
{
    int count=0;
    double Bal=50;

    while (Bal < 100)
    {
        count++;
        Bal += (Bal * 0.02);
    }

    cout << "It will take " << count << " months "
         << "before  you're credited $100.\n";
    
    return 0;

}