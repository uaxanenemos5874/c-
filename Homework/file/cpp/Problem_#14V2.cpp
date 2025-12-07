// This is the solution Homework1  from C++ Course 3, Lesson #34. 
// Date: 2/11/2025, Time: 7:58
#include <iostream>

using namespace std;

void Sewp_to_number1_functoin (int &num1, int &num2) {

    num1 = 20;
    num2 = 10;

    cout << num1 << endl << num2 << endl;
  
}



int main () {
    int num1, num2; 
    
    num1 = 10;
    num2 = 20;

    cout << num1 << endl << num2 << endl;
    Sewp_to_number1_functoin(num1, num2);
    

    return 0;
} 