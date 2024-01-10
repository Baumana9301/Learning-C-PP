/*Chapter II Practice Program I - Ounces to Tons
Program reads in a cereal box weight (oz) and then 
    converts it to metric tons. 
Then calculates how many boxes of cereal would be required
    yield 1 metric ton of that cereal.*/

#include <iostream>
using namespace std;

int main()
{
    double cereal_weight_oz, cereal_weight_tons, boxes_req;
    const double OZ_IN_TON = 35263.92;
    char choice;

    do
    {
        cout << "Please enter the weight of your box of cereal (oz): ";
        cin >> cereal_weight_oz;

        cereal_weight_tons = cereal_weight_oz * (1 / OZ_IN_TON);
        boxes_req = (1 / cereal_weight_oz) * (OZ_IN_TON / 1);

        cout << "\nYour cereal box weighs " << cereal_weight_tons << " tons.\n";
        cout << boxes_req << " boxes of this cereal would be required to yield one metric ton.\n";

        cout << "\nWould you like to calculate with another box of cereal?\n";
        cout << "Type 'y' for yes and 'n' for no: ";
        cin >> choice;

    } while ((choice == 'y') || (choice == 'Y'));

    cout << "\nHave a nice day!\n";

    return 0;
    
}
