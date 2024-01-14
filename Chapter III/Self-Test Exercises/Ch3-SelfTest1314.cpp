//Chapter III - SelfTest 13 & 14 - enum output

#include <iostream>
using namespace std;

int main()
{
    enum Direction { N, S, E, W };

    cout << (Direction::W) << " " << E << " " << S << " " << N << endl;

    enum nums { n1 = 5, n2 = 7, n3 = 1, n4 };

    cout << (nums::n4) << " " << (nums::n3) << " "
         << (nums::n2) << " " << (nums::n1);

    return 0;
}