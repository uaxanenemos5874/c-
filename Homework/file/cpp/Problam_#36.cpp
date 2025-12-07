// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 23/11/2025, Time: 14:30

#include <iostream>

using namespace std;

int main () {

    int Number1, Number2;
    char Operation_type;

    cout << "Enter Number1: \n";
    cin >> Number1;

    cout << "Enter Number2:  \n";
    cin >> Number2;

    cout << "Enter Operation Type: \n";
    cin >> Operation_type;

    if (Operation_type == '+') {

        cout << Number1 + Number2 << endl;

    }
    else if (Operation_type == '*') {

        cout << Number1 * Number2 << endl;

    }
    else if (Operation_type == '-') {

        cout << Number1 - Number2 << endl;

    }
    else if (Operation_type == '/') {

        cout << Number1 / Number2 << endl;

    }
    else if (Operation_type == '%') {

        cout << Number1 % Number2 << endl;

    }
    else {
        cout << "Pleas enter number1 and number2 and opType (+; -; *; /; %)" << endl;
    }

    return 0;

}