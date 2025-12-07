// This is the solution Homework3  from C++ Course 3, Lesson #47. 
// Date: 29/11/2025, Time: 18:15

#include <iostream>

using namespace std;

void ask_user_to_n (int &n) {

    cout << "Enter n: \n";
    cin >> n;


}




int main () {
    int n;

    ask_user_to_n (n);

    for (int number = n; number >= 1; number--) {

        cout << number << endl;

    }

    return 0;
}
