//Chapter III Self-Test2 - Precedence Rules

#include <iostream>
using namespace std;

int main()
{
    cout << "The boolean precedence rules for C++ are as follows:\n";

    cout << "\n1. The unary operators +, -, ++, --, and !\n";
    cout << "   Ex- in the expression (((x + 1) > 2) || ((x + 1) < -3)), \n";
    cout << "   the unary operator - is applied to the -3 FIRST.\n";

    cout << "\n2. The binary arithmetic operations *, /, %\n";
    cout << "   Just as you would in PEMDAS.\n";

    cout << "\n3. The binary arithmetic operations +, -\n";
    cout << "   Just as you would in PEMDAS.\n";

    cout << "\n4. The Boolean operations <, >, <=, >=\n";
    cout << "   Once arithmetic within the statement is complete\n";
    cout << "   the expression(s) can be evaluated to TRUE or FALSE.\n";
    cout << "   <, >, <=, >= are the first booleans that will be evaluated.\n";

    cout << "\n5. The Boolean operations ==, !=\n";
    cout << "   ==, !== are evaluated next.\n";

    cout << "\n6. The Boolean operation &&\n";
    cout << "   && follows.\n";

    cout << "\n7. The Boolean operation ||\n";
    cout << "   || is last.\n";
    
    return 0;
}