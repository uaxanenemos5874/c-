
#include <iostream>
using namespace std;




struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};


struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};


struct stPerson
{

    string FirstName;
    string LastName;
  
    stContactInfo ContactInfo;

    
};

void Readinfo (stPerson &Person) {

    cout << "Enter firstname: " << endl;
    getline(cin, Person.FirstName);

    cout << "Enter lastname: " << endl;
    getline(cin, Person.LastName);

    cout << "Enter streetname: " << endl;
    getline(cin, Person.ContactInfo.Address.StreetName);

    cout << "Enter buildingno: " << endl;
    getline(cin, Person.ContactInfo.Address.BuildingNo);

    cout << "Enter pobox: " << endl;
    getline(cin, Person.ContactInfo.Address.POBox);

    cout << "Enter zipcode: " << endl;
    getline(cin, Person.ContactInfo.Address.ZipCode);

    cout << "Enter mail: " << endl;
    getline(cin, Person.ContactInfo.Email);

    cout << "Enter phone: " << endl;
    getline(cin, Person.ContactInfo.Phone);

};

void Printinfo (stPerson &Person) {
    
    cout << "*********************************************\n";
    cout << "Firstname: " << Person.FirstName << endl;
    cout << "Lastname: " << Person.LastName << endl;
    cout << "Streetnama: " << Person.ContactInfo.Address.StreetName << endl;
    cout << "Buildingno: " << Person.ContactInfo.Address.BuildingNo << endl;
    cout << "Pobox: " << Person.ContactInfo.Address.POBox << endl;
    cout << "Zipcode: " << Person.ContactInfo.Address.ZipCode << endl;
    cout << "Mail: " << Person.ContactInfo.Email << endl;
    cout << "Phone: " << Person.ContactInfo.Phone << endl;
    cout << "*********************************************\n";
};


int main()
{
    stPerson Person1;

   Readinfo(Person1);
   Printinfo(Person1);
    
    return 0;
}