// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 23/11/2025, Time: 14:58

#include <iostream>

using namespace std;

enum enMonths {January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9 , October = 10, November = 11, December = 12};


int main () {

    int Months;
    enMonths Month;

    cout << "Enter Month: \n";
    cin >> Months;


    Month = (enMonths)Months;

    
    switch (Month)
    {
    case enMonths::January:
        cout << "January";
        break;

    case enMonths::March:
        cout << "March";
        break;

    case enMonths::April:
        cout << "April";
        break;

    case enMonths::May:
        cout << "May";
        break;

    case enMonths::June:
        cout << "June";
        break;

    case enMonths::July:
        cout << "July";
        break;

    case enMonths::August:
        cout << "August";
        break;

    case enMonths::September:
        cout << "September";
        break;

    case enMonths::October:
        cout << "October";
        break;

    case enMonths::November:
        cout << "November";
        break;

    case enMonths::December:
        cout << "December";
        break;
    
    default:
        cout << "Not month in year.";
        break;
    }

    return 0;

}