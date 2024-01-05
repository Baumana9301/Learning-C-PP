#include <iostream>
using namespace std;

int main()
{
    int time_s, distance_ft;
    cout << "Please enter the amount of time the object will be in freefall (in s):\n";
    cin >> time_s;
    distance_ft = (32 * (time_s * time_s))/2;
    cout << "The object will fall ";
    cout << distance_ft;
    cout << "ft in ";
    cout << time_s;
    cout << " seconds.";

    return 0;
}