// This is the solution Homework3  from C++ Course 3, Lesson #49. 
// Date: 02/12/2025, Time: 15:08

#include <iostream>

using namespace std;

int main () {

    for (int i = 1; i <= 10; i++) {

        for (int j = 10; j >= i; j--) {

            cout << i << endl;

        }

        cout << " " << endl;

        

    }

    return 0;

}