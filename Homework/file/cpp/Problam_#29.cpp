// This is the solution Homework3  from C++ Course 3, Lesson #47. 
// Date: 30/11/2025, Time: 13:38

#include <iostream>

using namespace std;

void ask_user_to_n (int &n) {

    cout << "Enter n: \n";
    cin >> n;


}

int main () {

    int n, sum;

    sum = 0;

    ask_user_to_n(n);

    for (int number = 0; number <= n; number = number + 2) {

        cout << number << endl;

        sum = sum + number;


    }

    cout << sum << endl;

    return 0;

    
}