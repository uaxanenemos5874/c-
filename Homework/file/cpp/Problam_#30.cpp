// This is the solution Homework3  from C++ Course 3, Lesson #47. 
// Date: 30/11/2025, Time: 14:27

#include <iostream>

using namespace std;

void ask_user_to_n (int &n) {

    cout << "Enter n: \n";
    cin >> n;


}

int main () {

    int n, sum;

    

    ask_user_to_n(n);

    sum = n;



    for (int facto = 1; sum >= 1; --sum) {

        facto = facto * sum;

        cout << facto << endl;

    }

    return 0;
}