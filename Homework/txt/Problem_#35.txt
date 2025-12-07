// This is the solution Homework35  from C++ Course 3 Problem #35 , Lesson #20. 
// Date: 09/10/2025, Time: 10:31

#include <iostream>

using namespace std;

int main () {
    short int Penny, Nickel, Dime, Quarter, Dollar;

    cout << "Enter Penny: \n";
    cin >> Penny;

    cout << "Enter Nickel : \n";
    cin >> Nickel;

    cout << "Enter Dime : \n";
    cin >> Dime;

    cout << "Enter Quarter: \n";
    cin >> Quarter;

    cout << "Enter Dollar: \n";
    cin >> Dollar;

    float Total_Penny;
    Total_Penny = Penny + (Nickel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100);
    float Total_Dollar;
    Total_Dollar = Total_Penny / 100;
    cout << Total_Penny << " Pennies \n" << Total_Dollar << " Dollars \n";

    return 0;
   
}
