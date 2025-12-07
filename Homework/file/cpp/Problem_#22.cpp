// This is the solution Homework22  from C++ Course 3 Problem #22 , Lesson #20. 
// Date: 09/10/2025, Time: 9:58

#include <iostream>

using namespace std;

int main () {
    const float PI = 3.14;
    float Base_of_a_triangle_a, Leg_of_a_triangle_b;

    cout << "Enter Leg of  triangle : \n";
    cin >> Leg_of_a_triangle_b;

    cout << "Enter Base of triangle: \n";
    cin >> Base_of_a_triangle_a;

    float area;
    area = PI * (Base_of_a_triangle_a * Base_of_a_triangle_a / 4 ) * ((2 * Leg_of_a_triangle_b - Base_of_a_triangle_a) / (2 * Leg_of_a_triangle_b + Base_of_a_triangle_a));
    cout << "area = " << area;

    return 0;

}