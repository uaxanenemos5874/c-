// This is the solution Homework14  from C++ Course 3 Problem #14 , Lesson #20. 
// Date: 09/10/2025, Time: 8:12

#include <iostream>

using namespace std;

int main () {
    short int number1, number2;

    cout << "Enter number1: \n";
    cin >> number1;

    cout << "Enter number2: \n";
    cin >> number2;

    cout << endl;

    cout << number1 << endl << number2 << endl;

    short int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
    cout << endl;

    cout << number1 << endl << number2;

    return 0;
    

}

/* // This is the solution Homework14  from C++ Course 3 Problem #14 , Lesson #20. 
// Date: 07/10/2025, Time: 8:12

#include <iostream>

using namespace std;

int main () {
    short int number1, number2;

    cout << "Enter number1: \n";
    cin >> number1;

    cout << "Enter number2: \n";
    cin >> number2;

    cout << endl;

    cout << number1 << endl << number2 << endl;

    
    
    number1 = number2 + number1;
    number2 = number1 - number2;
    number 1 = number1 - number2;
    cout << endl;

    cout << number1 << endl << number2;

    return 0;
    

}
    */