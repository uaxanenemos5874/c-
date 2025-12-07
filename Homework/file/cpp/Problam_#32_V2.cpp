// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 06/12/2025, Time: 16:51

#include <iostream>

using namespace std;

void ask_user_M_and_number (int &M, int &number) {

    cout << "Enter number: \n";
    cin >> number;

    cout << "Enter M: \n";
    cin >> M;

}

int main () {


    int M, number, counter, sum;

    ask_user_M_and_number(M, number);

    
    while (number < 0 || M < 0) {

        cout << "Worng number and M pleas enter agine. \n";

        ask_user_M_and_number(number, M);
    }

    counter = 1;
    sum = 1;

    while (counter <= M) {

        sum = sum * number;
        counter++;

    }

    cout << sum << endl;

    return 0;

}