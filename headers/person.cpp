
#include "person.h"

string Person::get_name()
{
    return name;
}

string Person::get_gender()
{
    return gender;
}

int Person::get_age()
{
    return age;
}

void Person::put_name(string arg_name) 
{
    name = arg_name;
}   

void Person::put_gender(string arg_gender)
{
    gender = arg_gender;
}

void Person::put_age(int arg_age)
{
    age = arg_age;
}

void Person::populate_person_data()
{
    string name;
    string gender;
    int age;
    
    cout << "Enter name: ";
    // To ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
    getline(cin, name);
    put_name(name);
    
    cout << "Enter Gender: ";
    getline(cin, gender);
    put_gender(gender);
    
    cout << "Enter age: ";
    cin >> age;
    put_age(age);
}

void Person::print_person_data()
{
    cout << "Name: " << get_name() << endl;
    cout << "Gender: " << get_gender() << endl;
    cout << "Age: " << get_age() << endl;
}