// This is the solution Homework3  from C++ Course 3, Lesson #41. 
// Date: 15/11/2025, Time: 8:57

#include <iostream>
#include <string>

using namespace std;



struct  stinfoperson
{
    string Firstname, Lastname, Phone;
    int age;
    
};

void Read_info_person1 (stinfoperson &Person) {

    cout << "Enter Firstname: \n";
    
    getline(cin, Person.Firstname);

    cout << "Enter Lastname: \n";
  
    getline(cin, Person.Lastname);

    cout << "Enter Age:\n";
    cin >> Person.age;
    
    cout << "Enter Phone: " << endl;
    cin.ignore (1, '\n');
    getline(cin, Person.Phone);

}

void Read_info_person2 (stinfoperson &Person) {
    Read_info_person1 (Person);
}

void Print_info_person1 (stinfoperson &Person) {
    cout << "Firstname: " << Person.Firstname << endl;
    cout << "Lastname: " << Person.Lastname << endl;
    cout << "Age: " << Person.age << endl;
    cout << "Phone: " << Person.Phone << endl;

}

void Print_info_person2 (stinfoperson &Person) {
    Print_info_person1 (Person);
}



int main () {

    stinfoperson Person[2];

    Read_info_person1 (Person[0]);
    //Read_info_person1 (Person[1]);
    Read_info_person2 (Person[1]);

    cout << "*****************\n";


    //Print_info_person1 (Person[0]);
    
    cout << "*****************\n";
    cout << "*****************\n";

    Print_info_person1 (Person[1]);


    Print_info_person2 (Person[1]);
    cout << "*****************\n";



    return 0;
}



