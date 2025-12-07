// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 26/11/2025, Time: 15:48

#include <iostream>

using namespace std;

enum enDays {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

void ShowMenu_Week () {


    cout << "*********************\n";
    cout << "Days of Week.";
    cout << "*********************\n";


    cout << "(1) Sunday\n";
    cout << "(2) Monday\n";
    cout << "(3) Tuesday\n";
    cout << "(4) Wednesday\n";
    cout << "(5) Thursday\n";
    cout << "(6) Friday\n";
    cout << "(7) Saturday\n";

    cout << "******************************************\n";

}

enDays Read_day () {
    enDays day;
    int days;
    cin >> days;
    return (enDays)days;

}

string Get_Day (enDays day) {

    switch (day)
    {
    case enDays::Sunday:
        return "Sunday";
        break;
    
    case enDays::Monday:
        return "Monday";
        break;

    case enDays::Tuesday:
        return "Tuesday";
        break;

    case enDays::Wednesday:
        return "Wednesday";
        break;

    case enDays::Thursday:
        return "Thursday";
        break;

    case enDays::Friday:
        return "Friday";
        break;

    case enDays::Saturday:
        return "Saturday";
        break;
    
    default:
        return "Not day in week.";
        break;
    }
}

int main () {

    ShowMenu_Week ();

    string day_of_week = Get_Day(Read_day());

    cout << "Day is " << day_of_week;

    return 0;
}