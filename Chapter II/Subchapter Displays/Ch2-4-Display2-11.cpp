#include <iostream>
using namespace std;

int main()
{
    int my_score=4, your_score, my_money=0, your_money=0;

    cout << "Please input your score: ";
    cin >> your_score;

    if (my_score > your_score)
    {
        cout << "I win!\n";
        my_money += 100;
        your_money -= 100;
        cout << "My money: $" << my_money << endl;
        cout << "Your money: $" << your_money << endl;
    }

    else
    {
        cout << "You win!\n";
        my_money -= 100;
        your_money += 100;
        cout << "My money: $" << my_money << endl;
        cout << "Your money: $" << your_money << endl;
    }

    return 0;
}