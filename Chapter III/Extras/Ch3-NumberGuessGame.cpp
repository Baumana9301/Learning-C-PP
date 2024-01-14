/* Chapter III - Extra - Number Guess Game*/

#include <iostream>
using namespace std;

int main()
{
     int n1 = 53, guess;

     do
     {
          cout << "\nPlease enter a guess: ";
          cin >> guess;

          if (guess > n1)
               cout << "\nToo high!\n";
          else if (guess < n1)
               cout << "\nToo low!\n";
          else //(guess == n1)
               cout << "\nCorrect!\n";
     } while (guess != n1);

     return 0;
}
