// This is the solution Homework3  from C++ Course 3, Lesson #42. 
// Date: 16/11/2025, Time: 8:11

#include <iostream>

using namespace std;

int main () {

    int age;

    cout << "Enter your age: " << endl;
    cin >> age;
    
    if (age >= 18 && age <= 45) {

        cout << "Valid age" << endl;
    }
    else {

        cout << "Invalid age" << endl;
    }
    
    return 0;
    
}