// This is the solution Homework18  from C++ Course 3 Problem #18 , Lesson #26. 
// Date: 18/10/2025, Time: 7:23

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const float PI = 3.14;
    unsigned r;

    cout << "Enter r: " << endl;
    cin >> r;

    float area;

    area = PI * pow(r, 2); 
    cout << area << endl;

    cout << ceil(area) << endl;

    return 0;




}