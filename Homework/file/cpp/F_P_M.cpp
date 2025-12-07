// This is the solution Homework1  from C++ Course 3, Lesson #34. 
// Date: 1/11/2025, Time: 7:45

#include <iostream>

using namespace std;

int number1, number2;

void mysumProcedures () {
    cout << "Pleas Enter Number1: \n";
    cin >> number1;
    cout << endl;
    cout << "Pleas Enter Number2: \n";
    cin >> number2;

    cout <<"***************************" << endl << number1 + number2 << endl; 

}

int mysumFunctions () {
    cout << "Pleas Enter Number1: \n";
    cin >> number1;
    cout << endl;
    cout << "Pleas Enter Number2: \n";
    cin >> number2;
    cout << endl;

    return number1 + number2;

   
}

int main () {
    mysumProcedures ();

    int Result;
    Result = mysumFunctions ();
    cout << Result ;
    

    return 0;
}