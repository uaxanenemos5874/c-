// This is the solution Homework3  from C++ Course 3, Lesson #50. 
// Date: 05/12/2025, Time: 17:05

#include <iostream>

using namespace std;

void ask_user_to_n (int &n) {

    cout << "Enter n: \n";
    cin >> n;

}

int main () {

    int n, facto, sum;

    ask_user_to_n(n);

    

    while (n < 0) {

        cout << "Worng number\n";

        ask_user_to_n(n);

    }

    facto = 1;
    

    while (n >= 1) {

        facto = facto * n;
        cout << facto << endl;
        n--;

    }

    cout << facto << endl;

    return 0;
}