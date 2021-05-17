
// Implementation of Person's members and functions

#include "person.h"

void Person::print_name()
{
    cout << "Name: " << name << endl;
}

void Person::print_gender()
{
    cout << "Gender: " << gender << endl;
}

void Person::print_age()
{
    cout << "Age: " << age << endl;
}

void Person::put_name() 
{
    cout << "Enter the name: ";
    getline(cin, name);
}   

void Person::put_gender()
{
    cout << "Enter Gender: ";
    getline(cin, gender);
}

void Person::put_age()
{
    cout << "Enter Age: ";
    cin >> age;
}

void Person::populate_person_data()
{
    // To ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
 
    put_name();
    put_gender();
    put_age();
}

void Person::print_person_data()
{
    print_name();
    print_gender();
    print_age();
}