// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 26/11/2025, Time: 15:32

#include <iostream>

using namespace std;

enum enOperation_type  {Addition = 1, Multiplication = 2, Subtraction = 3, Division = 4, Remainder = 5};

void Mune_operation () {

    cout << "******************************\n";
    cout << "Pleas chose the number of operation type?: \n";
    cout << "(1) +\n";
    cout << "(2) *\n";
    cout << "(3) -\n";
    cout << "(4) /\n";
    cout << "(5) %\n";
    cout << "******************************\n\n";
    cout << "Your choise:  \n";
    

}

enOperation_type Read_number_operation () {
    enOperation_type Operation_type;
    int c;
    
    cin >> c;
    return (enOperation_type)c;

}
    
    
int Get_ruselt (enOperation_type Operation_type) {

    int Number1, Number2;

    cout << "Enter Number1: \n";
    cin >> Number1;
    
    cout << "Enter Number2:  \n";
    cin >> Number2;

    switch (Operation_type) {
    
    case enOperation_type::Addition:

        return Number1 + Number2;
        break;

    case enOperation_type::Multiplication:

        return Number1 * Number2;
        break;
    
    case enOperation_type::Subtraction: 

        return Number1 - Number2;
        break;
    
    case enOperation_type::Division:

        return Number1 / Number2;
        break;
    
    case enOperation_type::Remainder:

        return Number1 % Number2;
        break;

    default:
      return Number1;
    
    }
}

int main () {

    Mune_operation();  

    int Rueslt = Get_ruselt(Read_number_operation());


    cout << "Ruslet is " << Rueslt << endl;

    return 0;

}