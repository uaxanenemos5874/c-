// This is the solution Homework3  from C++ Course 3, Lesson #43. 
// Date: 26/11/2025, Time 16:00

#include <iostream>

using namespace std;

enum enMonths {January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9 , October = 10, November = 11, December = 12};

void ShowMenu_Week () {


    cout << "*********************\n";
    cout << "Months of Year.";
    cout << "*********************\n";


    cout << "(1) January\n";
    cout << "(2) February\n";
    cout << "(3) March\n";
    cout << "(4) April\n";
    cout << "(5) May\n";
    cout << "(6) June\n";
    cout << "(7) July\n";
    cout << "(8) August\n";
    cout << "(9) September\n";
    cout << "(10) October\n";
    cout << "(11) November\n";
    cout << "(12) December\n";
    

    cout << "******************************************\n";

}

enMonths Read_Month () {

    enMonths Month;
    int M;
    cin >> M;

    return (enMonths)M;

}

string Get_Month (enMonths Month) {

    switch (Month)
    {
    case enMonths::January:
        return "January";
        break;

    case enMonths::March:
        return "March";
        break;

    case enMonths::April:
        return "April";
        break;

    case enMonths::May:
        return "May";
        break;

    case enMonths::June:
        return "June";
        break;

    case enMonths::July:
        return "July";
        break;

    case enMonths::August:
        return "August";
        break;

    case enMonths::September:
        return "September";
        break;

    case enMonths::October:
        return "October";
        break;

    case enMonths::November:
        return "November";
        break;

    case enMonths::December:
        return "December";
        break;
    
    default:
        return "Not month in year.";
        break;
    }

}

int main () {

    ShowMenu_Week ();
    string month_of_year = Get_Month(Read_Month());

    cout << "Month is " << month_of_year << endl;
    
    return 0;
    
}