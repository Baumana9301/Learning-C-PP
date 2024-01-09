#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Please enter a score: ";
    cin >> score;

    if (score > 100)
        cout << "High";
    
    if (score <= 100)
        cout << "Low";
    
    return 0;
}