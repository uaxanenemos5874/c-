// This is the solution Homework43  from C++ Course 3 Problem #43 , Lesson #20. 
// Date: 09/10/2025, Time: 20:00

#include <iostream>

using namespace std;


int main () {
    short int second;
    int total_second;
    const int daysofsecond = 24 * 60 * 60 , hoursofsecond = 60 * 60, minutesofseond = 60;
    
    
    cout << "Enter total second: \n";
    cin >> total_second;
    int remaind, second_per_day, second_per_hours, second_per_minutse;
    
    second_per_day = total_second / daysofsecond;
    remaind = total_second % daysofsecond;
    second_per_hours = remaind / hoursofsecond;
    remaind = remaind % hoursofsecond;
    second_per_minutse = remaind / minutesofseond;
    remaind = remaind % minutesofseond;
    second = remaind;
    cout << second_per_day << ":" << second_per_hours << ":" << second_per_minutse << ":" << second << endl;
    

    return 0;

    


}
