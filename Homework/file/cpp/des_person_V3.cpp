// This is the solution Homework1  from C++ Course 3, Lesson #32. 
// Date: 29/10/2025, Time: 6:38

#include <iostream>

using namespace std;

void display_mycard_info() 
{
    cout << "*************************" << endl;
    cout << "Name: Ahmed." << endl;
    cout << "Age: 44 years.\n";
    cout << "City: Oran" << endl;
    cout << "Country: Algria\n";
    cout << "*************************" << endl;

};

void print_square_star() 
{
    cout << "*********" << endl;
    cout << "*********" << endl;
    cout << "*********" << endl;
    cout << "*********" << endl;
    cout << "*********" << endl;

};

void print_i_love_programming() 
{
    cout << "I Love Programming!\n" << endl;
    cout << "I promise to be the best developer ever!\n" << endl;
    cout << "I know it will take some time proctice, but I will achieve my goal.\n" << endl;
    cout << "Best Regards,\n";
    cout << "Ahmed.\n";

};

void print_H() 
{
    cout << "*\t*\n";
    cout << "*\t*\n";
    cout << "*********\n";
    cout << "*\t*" << endl;
    cout << "*\t*" << endl;

};



int main () {

    display_mycard_info();
    print_square_star();
    print_i_love_programming();
    print_H();

    return 0;
    
}