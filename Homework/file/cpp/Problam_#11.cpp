// This is the solution Homework3  from C++ Course 3, Lesson #42. 
// Date: 16/11/2025, Time: 7:56

#include <iostream>

using namespace std;

int main () {

    int mark1, mark2, mark3,  average;

    cout << "Enter your mark1: \n";
    cin >> mark1;

    cout << "Enter your mark2: \n";
    cin >> mark2;

    cout << "Enter your mark3: \n";
    cin >> mark3;

    average = (mark1 + mark2 + mark3) / 3;


    if (average >= 50 ) {

        cout << average << "\n";
        cout << "Pass\n";

    }
    else {
        
        cout << "fail " << endl;    
    }
    
    return 0;
}