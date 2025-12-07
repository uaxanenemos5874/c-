// This is the solution Homework20  from C++ Course 3 Problem #20 , Lesson #26. 
// Date: 18/10/2025, Time: 7:40

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const float PI = 3.14;
    unsigned A;

    cout << "Enter A: " << endl ;
    cin >> A;

    float area;

    area = PI * pow(A / 2, 2);
    cout << area << endl;

    cout << ceil(area) << endl;
    
}