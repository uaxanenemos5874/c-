// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 05/12/2025, Time: 8:49

#include <iostream>


using namespace std;

void ask_user_to_n (int &n) {

    cout << "Enter n: \n";
    cin >> n;


}


int main () {
    int n, number;

    number = 1;

    ask_user_to_n (n);

    while (number <= n) {

        cout << number << endl;
        number++;

    }

    return 0;
}


