// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 06/12/2025, Time: 17:47

#include <iostream>

using namespace std;

void enter_number (int &number) {

    cout << "Enter number: \n";
    cin >> number;

}


int main () {

    int number, sum;

    enter_number(number);

    sum = 0;

    while (number > 0 || number < -99 || number != -99) {

        sum += number;

        enter_number(number);


        // عملتها بعد درس break لانه كان يطبع -99 بدون ان يتوقف. time: 1:45
        if (number == -99) {

             cout << sum << endl;
            break;

        }
    
    }

    return 0;

}