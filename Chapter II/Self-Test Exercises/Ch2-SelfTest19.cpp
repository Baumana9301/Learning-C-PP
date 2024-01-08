#include <iostream>
using namespace std;

int main()
{
    double c = 20, f;

    f = (9/5) * c + 32.0;

    cout << f << " degrees F\n";
    cout << "Logic error is produced when integer division is performed. "
         << "f is defined with 9/5 and since both are integers, 1 is result.\n"
         << endl;
    
    f = (9.0/5) * c + 32.0;

    cout << "Following modification to the expression whose evaluated value is "
         << "assigned to f (9/5 > 9.0/5), the new result is " << f << " degrees F\n";

    return 0;
}