// This is the solution Homework23 from C++ Course 3 Problem #23 , Lesson #26. 
// Date: 18/10/2025, Time: 8:55

#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int a, b, c;
    const float PI = 3.14; 
    
    cout << "Enter a: \n";
    cin >> a;

    cout << "Enter b: \n";
    cin >> b;

    cout << "Enter c: \n";
    cin >> c;

    const int P = (a + b + c) / 2; // صححها لي chatgpt بعد نصف ساعه من محاوله مع نفسي

    double area, areaP;
    areaP = (pow(a * b * c, 2) / pow(4 * sqrt(P * (P - a) * (P - b) * (P - c) ), 2));

    area = PI * areaP;
    cout << area << endl;

    cout << round(area) << endl;

    return 0;

}