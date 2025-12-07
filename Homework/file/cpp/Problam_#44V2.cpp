// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 23/11/2025, Time: 14:45

#include <iostream>

using namespace std;

enum enDays {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};


int main () {
    int days;
    enDays Days;

    cout << "Enter day:";
    cin >> days;

    Days = (enDays)days;

    switch (Days)
    {
    case enDays::Sunday:
        cout << "Sunday";
        break;
    
    case enDays::Monday:
        cout << "Monday";
        break;

    case enDays::Tuesday:
        cout << "Tuesday";
        break;

    case enDays::Wednesday:
        cout << "Wednesday";
        break;

    case enDays::Thursday:
        cout << "Thursday";
        break;

    case enDays::Friday:
        cout << "Friday";
        break;

    case enDays::Saturday:
        cout << "Saturday";
        break;
    
    default:
        cout << "Not day in week.";
        break;
    }

    return 0;

}