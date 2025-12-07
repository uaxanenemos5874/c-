// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 17/11/2025, Time: 8:25

#include <iostream>

using namespace std;

int main () {
    int Day;
    string Days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Enter day: \n";
    cin >> Day;

    if (Day == 1) {

        cout << "Its " << Days[0] << endl;

    }
    else if (Day == 2) {

        cout << "Its " << Days[1] << endl;

    }
    else if (Day == 3) {

        cout << "Its " << Days[2] << endl;

    }
    else if (Day == 4) {

        cout << "Its " << Days[3] << endl;

    }
    else if (Day == 5) {

        cout << "Its " << Days[4] << endl;

    }
    else if (Day == 6) {

        cout << "Its " << Days[5] << endl;

    }
    else if (Day == 7) {

        cout << "Its " << Days[6] << endl;

    }
    else {
        cout << "Worng day " << endl << "Pleas enter number 1 to 7 (1-7)" << endl;
        cout << "Enter day: \n";
        cin >> Day;
        
    }

    return 0;

}