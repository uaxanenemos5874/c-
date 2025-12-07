// This is the solution Homework21  from C++ Course 3 Problem #21 , Lesson #20. 
// Date: 09/10/2025, Time: 9:49

#include <iostream>

using namespace std;

int main () {
    const float PI = 3.14;
    float Circumference_of_a_circle_L;

    cout << "Circumference of  circle: \n";
    cin >> Circumference_of_a_circle_L;

    float area;
    area = (Circumference_of_a_circle_L * Circumference_of_a_circle_L) / (4 * PI );
    cout << " area =  " << area;

    return 0;

}