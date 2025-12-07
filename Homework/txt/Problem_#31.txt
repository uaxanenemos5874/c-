// This is the solution Homework31  from C++ Course 3 Problem #31 , Lesson #20. 
// Date: 09/10/2025, Time: 10:10

#include <iostream>

using namespace std;

int main () {
    short int number;

    cout << "Enter number: \n";
    cin >> number;
    cout << endl;

    short int number1, number2, number3;
    number1 = number * number;
    number2 = number * number1;
    number3 = number * number2;
    cout << number1 << endl << number2 << endl << number3;

    return 0;
}