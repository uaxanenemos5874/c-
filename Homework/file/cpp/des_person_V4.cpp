// This is the solution Homework1_V2  from C++ Course 3, Lesson #18. 
// Date: 22/10/2025, Time: 6:38

#include <iostream>

using namespace std;

enum status_gender {Male, Famale};
enum status_married {married, single};

int main () {
    string asterisk = "**************************";
    string name;
    string city;
    string country;
    int age;
    int monthlysalary;
    status_gender gender;
    status_married married;
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

    gender = status_gender::Male;

    married = status_married::single;

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