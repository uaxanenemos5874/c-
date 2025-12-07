// This is the solution Homework19  from C++ Course 3 Problem #19 , Lesson #26. 
// Date: 18/10/2025, Time: 7:30

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const float PI = 3.14;
    unsigned D;

    cout << "Enter D: ";
    cin >> D;

    float area;

    area = (PI * pow(D, 2)) / 4;
    cout << area << endl;

    cout << ceil(area) << endl;

    return 0;
    
}