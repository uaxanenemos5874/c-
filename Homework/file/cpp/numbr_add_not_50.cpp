// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 07/12/2025, Time: 2:05

#include <iostream>

using namespace std;

void enter_number (int &number) {

    cout << "Enter number: \n";
    cin >> number;

}

int main () {

    int number, sum;

    sum = 0;

    for (int i = 1; i <= 5; i++) {

        enter_number(number);

        if (number > 50) {

            continue;

        }

        sum += number;

    }

    cout << sum << endl;

    return 0;

}