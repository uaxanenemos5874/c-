// This is the solution Homework1_V2  from C++ Course 3, Lesson #18. 
// Date: 07/10/2025, Time: 9:15

#include <iostream>

using namespace std;

int main () {
    string asterisk = "**************************";
    string name;
    string city;
    string country;
    short int age;
    float monthlysalary;
    signed char gender;
    bool married;
    cout << "Enter your name: \n";
    cin >> name; 

    cout << "Enter your age: \n";
    cin >> age;

    cout << "Enter your city: " << endl;
    cin >> city;

    cout << "Enter your country: \n";
    cin >> country;

    cout << "Enter your monthlysalary: \n";
    cin >> monthlysalary;

    cout << "Enter your gender: \n";
    cin >> gender;

    cout << "You marride? : (Pleas enter Tree = 1 /false = 0.)" << endl;
    cin >> married;

    cout << asterisk << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " <<  age << " Years\n";
    cout << "City: " << city << endl; ;
    cout << "Country: " << country << endl;
    cout << "MonthlySalary: " << monthlysalary << endl;
    cout << "YearlySalary: " << monthlysalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << married << endl;
    cout << asterisk << endl;

    return 0;

}