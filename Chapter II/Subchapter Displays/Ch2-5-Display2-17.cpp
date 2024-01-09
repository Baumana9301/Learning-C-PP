//File Name: Ch-5-Display2-17.cpp
//Author: Andrew Bauman
//Email Address: andrew_bauman@students.ocean.edu
//Assignment Number: N/a
//Description: Program to determine if the user is ill
//Last Changed: 01.09.24

#include <iostream>
using namespace std;

int main()
{
    const double NORMAL = 98.6; //degrees Fahrenheit
    double temperature;

    cout << "Please enter your temperature(F): ";
    cin >> temperature;

    if (temperature > NORMAL)
    {
        cout << "You have a fever.\n"
             << "Drink a lot of fluids and get to bed.\n";
    }
    else
    {
        cout << "You don't have a fever.\n"
             << "Go study.\n";
    }

    return 0;
}