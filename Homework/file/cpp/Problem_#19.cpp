// This is the solution Homework19  from C++ Course 3 Problem #19 , Lesson #20. 
// Date: 09/10/2025, Time: 9:34

#include <iostream>

using namespace std;

int main () {
    const float PI = 3.14;
    
    float Diameter_of_a_circle;

    cout << "Enter Diameter of a circle : \n";
    cin >> Diameter_of_a_circle;

    float area;
    area = PI * (Diameter_of_a_circle * Diameter_of_a_circle) / 4;
    cout << endl;
    cout << " area = " << area;
}
