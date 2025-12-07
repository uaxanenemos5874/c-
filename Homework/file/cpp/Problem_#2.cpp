// This is the solution Homework1  from C++ Course 3, Lesson #34. 
// Date: 2/11/2025, Time: 7:58
#include <iostream>

using namespace std;

void enter_to_print_name () {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << name << endl;
}

int main () {
    enter_to_print_name ();

    return 0;
}