// This is the solution Homework22  from C++ Course 3 Problem #22 , Lesson #26. 
// Date: 18/10/2025, Time: 7:57

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const float PI = 3.14;
    unsigned a, b;
    
    cout << "Enter a: " << endl;
    cin >> a;

    cout << "Enter b: " << endl;
    cin >> b;
    
    float area;

    area = PI * (pow(b, 2) / 4) * (2 * a - b) / (2 * a + b);
    cout << area << endl;

    cout << floor(area) << endl;

    return 0;

}