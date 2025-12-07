// This is the solution Homework1  from C++ Course 3, Lesson #31. 
// Date: 27/10/2025, Time: 8:30

#include <iostream>
#include <string>

using namespace std;

int main () {
    string st1, st2, st3;

    cout << "Pleas enter string1: " << endl;
    getline(cin, st1);
    cout << "Pleas enter string2: \n";
    getline(cin, st2);
    cout << "Pleas enter string3: " << endl;
    getline(cin, st3);

    cout << "******************************************************\n";

    cout << "The length of string1 is " << st1.length() << endl;

    cout << "Characters to 0, 2, 4, 7 are: " << st1[0] << st1[2] << st1[4] << st1[7] << endl;

    cout << "concatenating string2 and string3 = " << st2 + st3 << endl;

    int sum = stoi(st2) * stoi(st3);

    cout << st2 <<  " * " << st3 << " = " << sum << endl;
    

    return 0;

}