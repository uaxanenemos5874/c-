// This is the solution Homework3  from C++ Course 3, Lesson #42. 
// Date: 16/11/2025, Time: 8:40

#include <iostream>

using namespace std;

void enter_number (int &number) {

    cout << "Enter number: \n";
    cin >> number;

}

void check_number_Prime_or_not_Prime (int &number, int &counter, int &sum) {
  
    number = counter;
    

    if (number % counter == 0) {

        sum = ++sum;

        --counter;
    }
    else if (number % counter != 0) {

        --counter;
    }
    else if (counter == 1 && sum == 2) {

        cout << "Prime" << endl;

    }
    else {

        cout << "Not prime" << endl;

    }

}

int main () {

    int number, counter, sum;

    enter_number(number);

    if (number > 0 &&  number != 0) {

        check_number_Prime_or_not_Prime (number, counter, sum);

    }
    else {

        cout << "Please enter a positive number" << endl;

    }

    return 0;
}