// This is the solution Homework1  from C++ Course 3 , Lesson #24. 
// Date: 16/10/2025, Time: 6:50

#include <iostream>

using namespace std;

int main () {

    short A, B;
    
    cout << "Pleas Enter the first number A?: \n";
    cin >> A;

    cout << "Pleas Enter the second number B?: \n";
    cin >> B;

    cout << A << " = " << B << " is " << (A == B) << endl;
    cout << A << " != " << B << " is " << (A != B) << endl;
    cout << A << " > " << B << " is " << (A > B) << endl;
    cout << A << " < " << B << " is " << (A < B) << endl;
    cout << A << " >= " << B << " is " << (A >= B) << endl;
    cout << A << " < " << B << " is " << (A <= B) << endl;

    return 0;

}

