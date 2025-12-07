// This is the solution Homework21  from C++ Course 3 Problem #21 , Lesson #26. 
// Date: 18/10/2025, Time: 7:47

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const float PI = 3.14;
    unsigned L;

    cout << "Enter L: ";
    cin >> L;

    float area;

    area = pow(L, 2) / (4 * PI);
    cout << area << endl;

    cout << floor(area);

    return 0;
    
}