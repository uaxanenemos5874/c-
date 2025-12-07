// This is the solution Increment Decrement  from C++ Course 3, Lesson #20. 
// Date: 06/10/2025, Time: 7:55

#include <iostream>

using namespace std;

int main () {
    short a, b, c, d;

    cout << "Enter a: \n";
    cin >> a;

    cout << "Enter c: \n";
    cin >> c;

    b = ++a;

    d = c++;
    
    cout << "A = " << a << " B = " << b << " C = " << c << " D = " << d << endl;

    return 0;
}