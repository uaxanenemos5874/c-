#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo& Info)
{

    

   

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;


    cout << "Please enter LastName?\n";
    cin >> Info.LastName;


    cout << "Please enter Age?\n";
    cin >> Info.Age;


    cout << "Please enter Phone?\n";
    cin >> Info.Phone;

}


void PrintInfo(strInfo Info)
{


    cout << "\n**********************************\n";


    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;


    cout << "\n**********************************\n";

}


void ReadPersonsInfo(strInfo Persons[100], int& Length)
{

    cout << "how to need enter person data?: \n";
    cin >> Length;

    for (int i = 0; i <= Length - 1; i++) {

        ReadInfo(Persons[i]);

    }
  
}


void PrintPersonsInfo(strInfo Persons[100], int Length)
{
    cout << "\n**********************************\n";

    for (int i = 0; i <= Length - 1; i++) {

        PrintInfo(Persons[i]);

    }

}


int main()
{

    strInfo Persons[100];
    int Length = 0;


    ReadPersonsInfo(Persons, Length);
    PrintPersonsInfo(Persons, Length);
   
    return 0;
}
