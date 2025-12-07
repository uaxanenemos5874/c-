// This is the solution Homework1  from C++ Course 3, Lesson #20. 
// Date: 07/10/2025, Time: 9:45

#include <iostream>

using namespace std;

int main () {
    short int first_number_A;
    short int second_number_B;

    cout << "Pleas enter the frist number A: \n";
    cin >> first_number_A;
    cout << "Pleas enter the second number B: \n";
    cin >> second_number_B;

    cout << first_number_A << " + " << second_number_B << " = " << first_number_A + second_number_B << endl;
    cout << first_number_A << " - " << second_number_B << " = " << first_number_A - second_number_B << endl;
    cout << first_number_A << " * " << second_number_B << " = " << first_number_A * second_number_B << endl;
    cout << first_number_A << " / " << second_number_B << " = " << first_number_A / second_number_B << endl;
    cout << first_number_A << " % " << second_number_B << " = " << first_number_A % second_number_B << endl;

    return 0;

}

