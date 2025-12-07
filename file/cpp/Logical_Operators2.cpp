// This is the solution Homework2  from C++ Course 3 , Lesson #24. 
// Date: 16/10/2025, Time: 8:03

#include <iostream>

using namespace std;

int main () {
    cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;

    cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;

    cout << (!(5 > 6 && 7 == 7 ) || !(1 || 0) ) << endl;

    cout << (!(5 > 6 || 7 == 7 ) && !(1 || 0) ) << endl;

    cout << ((5 > 6 && 7 <= 8 ) || (8 > 1 || 4 <= 3) && 1) << endl;

    cout << ((5 > 6 && ! (7 <= 8) ) && (8 > 1 || 4 <= 3) || 1) << endl;   

        return 0;

    }