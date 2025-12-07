// This is the solution Homework1_V2  from C++ Course 3, Lesson #39. 
// Date: 13/11/2025, Time: 11:30

#include <iostream>

using namespace std;

float greade[3];


void proseg_gread () {
    cout << "Pleas enter greade1: " << endl;
    cin >> greade[0];

    cout << "Pleas enter greade2: " << endl;
    cin >> greade[1];

    cout << "Pleas enter greade3: " << endl;
    cin >> greade[2];

}

float average_greade () {

   

    return (greade[0] + greade[1] + greade[2]) / 3;

}

int main () {
    

    proseg_gread ();

    cout << "************************************\n";
    cout << "The average of greade is " << average_greade() << endl;

    return 0;
}