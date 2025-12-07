// This is the solution Homework15  from C++ Course 3 Problem #15 , Lesson #20. 
// Date: 09/10/2025, Time: 8:28

#include <iostream>

using namespace std;

int main () {
    
    short int a_Length_rectangle, b_width_rectangle;
    
    cout << "Enter Length rectangle: \n";
    cin >> a_Length_rectangle;

    cout << "Enter width rectangle: \n";
    cin >> b_width_rectangle;

    short int area;
    area = a_Length_rectangle * b_width_rectangle;
    cout << "Area = " << area;

    return 0;

}