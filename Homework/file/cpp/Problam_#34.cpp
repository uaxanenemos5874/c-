// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 16/11/2025, Time: 8:40

#include <iostream>

using namespace std;

int main () {

    int Totalsales;
    string Percentag[5] = {"Percentag % 1", "Percentag % 2", "Percentag % 3", "Percentag % 5", "Percentag % 0"};

    cout << "Enter totalsales: " << endl;
    cin >> Totalsales;

    if (Totalsales == 1000000) {

        cout << Percentag[0] << " = " << (Totalsales * 1) / 100 << endl;

    }
    else if (Totalsales <= 1000000 && Totalsales >= 500000) {

        cout << Percentag[1] << " = " << (Totalsales * 2) / 100 << endl;

    }
    else if (Totalsales <= 500000 && Totalsales >= 100000) {

        cout << Percentag[2] << " = " << (Totalsales * 3) / 100 << endl;

    }
    else if (Totalsales <= 100000 && Totalsales >= 50000) {

        cout << Percentag[3] << " = " << (Totalsales * 5) / 100 << endl;

    }
    else {

        cout << Percentag[4] << " = " << (Totalsales * 0) / 100 << endl;

    }

    return 0;

}    