// This is the solution Homework47  from C++ Course 3 Problem #47 , Lesson #20. 
// Date: 09/10/2025, Time: 20:18


#include <iostream>

using namespace std;

int main () {
    float loanalount, montlypayment;

    cout << " Enter loanalount: \n";
    cin >> loanalount;

    cout << "Enter montlypayment: \n";
    cin >> montlypayment;

    int monts = loanalount / montlypayment;
    
    cout << monts << " Months";

    return 0;
}
