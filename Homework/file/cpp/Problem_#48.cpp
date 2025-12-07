// This is the solution Homework47  from C++ Course 3 Problem #48 , Lesson #20. 
// Date: 09/10/2025, Time: 20:00

#include <iostream>

using namespace std;

int main () {
    float loanalount, months;

    cout << " Enter loanalount: \n";
    cin >> loanalount;

    cout << "Enter Month: \n";
    cin >> months;

    float montlypayment = loanalount / months;

    cout << montlypayment;
    
    return 0;

}

    