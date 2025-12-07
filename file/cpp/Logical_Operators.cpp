// This is the solution Homework1  from C++ Course 3 , Lesson #25. 
// Date: 16/10/2025, Time: 7:40

#include <iostream>

using namespace std;

int main () {
    // This is the solution Logical Operators (< = >)
    cout << (12 <= 12) << endl <<  (12 > 7) << endl << (8 < 6) << endl << (8 == 8) << endl << (12 <= 12) << endl << (7 == 5) << endl;

    cout << endl << endl << endl;

    // This is the solution Logical Operators (not)
    cout << !(12 <= 12) << endl <<  !(12 > 7) << endl << !(8 < 6) << endl << !(8 == 8) << endl << !(12 <= 12) << endl << !(7 == 5) << endl;

    cout << endl << endl << endl;

    // This is the solution Logical Operators (and or not)
    cout << (1 && 1) << endl << (1 && 0) << endl << (0 || 1) << endl << (0 || 0) << endl << !(0) << endl << !(1 || 0);

    cout << endl << endl << endl;

     // This is the solution Logical Operators (not or and)
    cout << (7 == 7 && 7 > 5) << endl <<  (7 == 7 && 7 < 5) << endl << (7 == 7 || 7 < 5) << endl << (7 < 7 || 7 > 5) << endl << (!(7 == 7) && (7 > 5)) << endl << (7 == 7 && !(7 < 5)) << endl;

    cout << endl << endl << endl;



    



    return 0;
}