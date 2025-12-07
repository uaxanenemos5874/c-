// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 06/12/2025, Time: 18:01

#include <iostream>

using namespace std;

void ask_user_PIN (int &PIN) {

    cout << "Enter your PIN: \n";
    cin >> PIN;

}

int main () {

    int PIN, counter;

    ask_user_PIN(PIN);

    counter = 0;

    while (PIN != 1234) {

        cout << "Worng PIN. \n";
        counter++;
       
        // عملتها بعد درس break لانه كان يطبع Card is locked بدون ان يتوقف. time : 1:43
        if (counter == 3) {

            cout << "Card is locked. \n"; 
            break;

        }

        ask_user_PIN(PIN);

    }

    if (PIN == 1234) {

        cout << "Your balance is : 7500" << endl;

    }

    

    return 0;

}