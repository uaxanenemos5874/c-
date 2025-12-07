// This is the solution Homework3  from C++ Course 3, Lesson #42. 
// Date: 16/11/2025, Time: 7:47

#include <iostream>

using namespace std;

void ask_the_user_age (int &age) {
    cout << "Enter your age: \n";
    cin >> age;

}

void ask_the_user_driver_license (bool &DRV_license) {
    cout << "You have a driver license:   (yes > 1 -- no > 0)\n";
    cin >> DRV_license;
}

int main () {
    
    int Age;
    bool DRV_license;

    ask_the_user_age (Age);
    if (Age >= 21) {
        ask_the_user_driver_license (DRV_license);

    }
    else {
        cout << "Rejected" << endl;

        return 0;

    };
    
    if (DRV_license == 1) {
        cout << "Hired" << endl;

    }
    else {
        cout << "Rejected" << endl;
    }

    return 0;

}
