// This is the solution Homework1  from C++ Course 3, Lesson #34. 
// Date: 2/11/2025, Time: 8:24
#include <iostream>

using namespace std;

int Rectangle_area_functoin (int a, int b) {
    int area;

    area = a * b;
    return area;
}

int main () {
    int a, b;
    cout << "Enter a: \n";
    cin >> a;

    cout << "Enter b: \n";
    cin >> b;

    cout << Rectangle_area_functoin(a, b) << endl;

    return 0;
}