// This is the solution Homework3  from C++ Course 3, Lesson #42. 
// Date: 16/11/2025, Time: 8:18


#include <iostream>

using namespace std;

int main () {

    short PIN = 1234;
    short PIN_Enter;

    cout << "Enter your PIN: \n";
    cin >> PIN_Enter;

    if (PIN_Enter == PIN) {

        cout << "Your balans is 7500" << endl;

    }
    else {

        cout << "Worng PIN" << endl;

    }

    return 0;
        
}