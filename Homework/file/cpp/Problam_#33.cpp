// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 16/11/2025, Time: 8:40

#include <iostream>

using namespace std;

int main () {

    short Gread;
    char chars[6] = {'A', 'B', 'C', 'D', 'E', 'F'};

    cout << "Enter your gread: " << endl;
    cin >> Gread;

    if (Gread <= 0) {

        cout << "Plaes enter a gread" << endl;
    
    }
    else if  (Gread <= 100 && Gread >= 90) {

        cout << chars[0] << endl;

    }
    else if (Gread < 90 && Gread >= 80) {

        cout << chars[1] << endl;
        
    }
    else if (Gread < 80 && Gread >= 70) {

        cout << chars[2] << endl;
        
    }
    else if (Gread < 70 && Gread >= 60) {

        cout << chars[3] << endl;
        
    }
    else if (Gread < 60 && Gread >= 50) {

        cout << chars[4] << endl;
        
    }
    else {

        cout << chars[5] << endl;
    }

    return 0;

}