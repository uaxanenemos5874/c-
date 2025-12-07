// This is the solution Homework42  from C++ Course 3 Problem #42 , Lesson #26. 
// Date: 18/10/2025, Time: 9:20

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    short int daysofsecond, hoursofsecond, minutesofseond, second;
    cout << "Enter Days: \n";
    cin >> daysofsecond;

    cout << "Enter Hours: \n";
    cin >> hoursofsecond;

    cout << "Enter Minutes: \n";
    cin >> minutesofseond;

    cout << "Enter Second: \n";
    cin >> second;

    float total_second;
    total_second = (daysofsecond * 24 * pow(60, 2)) + (hoursofsecond * pow(60, 2)) + (minutesofseond * 60) + second;
    cout << round(total_second) << " Second";

    return 0;

}

    