// This is the solution Homework32 from C++ Course 3 Problem #32 , Lesson #26. 
// Date: 18/10/2025, Time: 9:12

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    short number, M;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter M: ";
    cin >> M;

    cout << "Number^M = " << round(pow(number, M));

    return 0;
    
}