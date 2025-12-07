// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 17/11/2025, Time: 7:54

#include <iostream>

using namespace std;

enum enOperation_type  {Addition = 1, Multiplication = 2, Subtraction = 3, Division = 4, Remainder = 5};


int main () {

    cout << "******************************\n";
    cout << "Pleas chose the number of operation type?: \n";
    cout << "(1) +\n";
    cout << "(2) *\n";
    cout << "(3) -\n";
    cout << "(4) /\n";
    cout << "(5) %\n";
    cout << "******************************\n\n";
    cout << "Your choise: \n";




    int Number1, Number2, c;
    enOperation_type Operation_type;
    
    cin >> c;
    Operation_type = (enOperation_type)c;
    
    cout << "Enter Number1: \n";
    cin >> Number1;

    cout << "Enter Number2:  \n";
    cin >> Number2;

    

    switch (Operation_type) {
    
    case enOperation_type::Addition:

        cout << Number1 + Number2 << endl;
        break;

    case enOperation_type::Multiplication:

        cout << Number1 * Number2 << endl;
        break;
    
    case enOperation_type::Subtraction: 

        cout << Number1 - Number2 << endl;
        break;
    
    case enOperation_type::Division:

        cout << Number1 / Number2 << endl;
        break;
    
    case enOperation_type::Remainder:

        cout << Number1 % Number2 << endl;
        break;


    default:
        cout << "Pleas enter number1 and number2 and opType (+; -; *; /; %)" << endl;
    }

    return 0;

}