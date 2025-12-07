// This is the solution Homework43  from C++ Course 3 Problem #43 , Lesson #26. 
// Date: 18/10/2025, Time: 9:32

#include <iostream>
#include <cmath>

using namespace std;


int main () {
    short int second;
    int total_second;
    const int daysofsecond = 24 * pow(60, 2) , hoursofsecond = pow(60, 2), minutesofseond = 60;
    
    
    cout << "Enter total second: \n";
    cin >> total_second;
    int remaind, second_per_day, second_per_hours, second_per_minutse;
    
    second_per_day = round(floor(total_second / daysofsecond));
    remaind = total_second % daysofsecond;
    second_per_hours = round(floor(remaind / hoursofsecond));
    remaind = remaind % hoursofsecond;
    second_per_minutse = round(floor(remaind / minutesofseond));
    remaind = remaind % minutesofseond;
    second = remaind;
    cout << second_per_day << ":" << second_per_hours << ":" << second_per_minutse << ":" << second << endl;
    

    return 0;

    


}
