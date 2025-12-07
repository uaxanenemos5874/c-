// A program that calculates your age in a specific future year.

#include <iostream>
#include <chrono>

using namespace std;


    


int main () {
    using namespace std::chrono;
    int age_user;
    int after_year;
    cout << "Enter your age: " << endl;
    cin >> age_user;
    cout << "Enter after year: " << endl;
    cin >> after_year;
    auto now = system_clock::now();
    time_t t = system_clock::to_time_t(now);
    tm* local = localtime(&t);

    int year = 1900 + local->tm_year;
    int User_year_of_birth = year - age_user;
    int after_year_F = User_year_of_birth + 150;
    

    if (after_year_F > after_year) {
       int age_user_after =  after_year - User_year_of_birth;
       cout << "Your age in " << age_user_after << " years.";


    } else {
        cout << "pleas enter year true.";

    }



    return 0;





}