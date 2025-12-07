// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 07/12/2025, Time: 1:32

#include <iostream> 

using namespace std;


int arr[10] = {10, 20, 44, 55, 33, 22, 99, 10};

int main () {

    int number = 0;

    while (arr[number] != 20) {

        cout << "Positon " << number << " is not number 20. \n";
        number++;

        if (arr[number] == 20) {
            cout << "Positon " << number << " is number 20. \n";
            break;
        }

    }

    return 0;
}