// This is the solution Homework39  from C++ Course 3 Problem #39 , Lesson #20. 
// Date: 09/10/2025, Time: 10:41

#include <iostream>

using namespace std;

int main () {
    float totalbill, cashpaid;

    cout << "Enter Total bill: \n";
    cin >> totalbill;

    cout << "Enter Cashpaid: \n";
    cin >> cashpaid;
    cout << endl;

    float remainder;
    remainder = cashpaid - totalbill;
    cout << "remainder = " << remainder;

    return 0;
}
