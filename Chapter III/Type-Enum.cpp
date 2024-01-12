/*Chapter III - Enumeration Types
-An enumeration type is a type whose values
are defined by a list of const. int. */

#include <iostream>
using namespace std;

int main()
{
    //Define a const value for len of each month
    enum monthLength { JAN_LENGTH = 31, FEB_LENGTH = 28,
    MAR_LENGTH = 31, APR_LENGTH = 30, MAY_LENGTH = 31,
    JUN_LENGTH = 30, JUL_LENGTH = 31, AUG_LENGTH = 31,
    SEP_LENGTH = 30, OCT_LENGTH = 31, NOV_LENGTH = 30,
    DEC_LENGTH = 31 };

    //Get value JAN_LENGTH from enum monthLength
    cout << "enum type monthLength value JAN_LENGTH: ";
    cout << (monthLength::JAN_LENGTH);

    /*If values not initialized in enum declaration,
    values will be incremented int.*/

    enum nums { n1, n2, n3, n4, n5 };

    cout << "\nenum type nums (values not initiazlied) output: "
         << (nums::n1) << (nums::n2) << (nums::n3)
         << (nums::n4) << (nums::n5);
    
    /*enum types will always assign values with NEXT int
    increment*/

    enum num2 { n6 = 5, n7, n8, n9 = -1, n10 };

    cout << "\nenum type num2 (some values initialized) output: "
         << (num2::n6) << (num2::n7) << (num2::n8) << (num2::n9)
         << (num2::n10);
}