// This is the solution Homework20  from C++ Course 3 Problem #20 , Lesson #20. 
// Date: 09/10/2025, Time: 9:40

#include <iostream>

using namespace std;

int main () {
    const float PI = 3.14;
    float A_square_outside_a_circle;

    cout << "Enter A square outside  circle : \n";
    cin >> A_square_outside_a_circle;

    float area;
    area = PI * ((A_square_outside_a_circle / 2) * (A_square_outside_a_circle / 2 ));
    cout << " area = " << area;

    return 0;

}