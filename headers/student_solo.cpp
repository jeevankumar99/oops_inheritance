
// Implementation of Student's members and functions.

#include "student_solo.h"

string Student::get_college_name()
{
    return college_name;
}

string Student::get_department()
{
    return department;
}

int Student::get_semester()
{
    return semester;
}

void Student::put_college_name()
{
    cout << "Enter College name: ";
    getline(cin, college_name);
}

void Student::put_department()
{
    cout << "Enter Department: ";
    getline(cin, department);
}

void Student::put_semester()
{
    cout << "Enter Semester: ";
    cin >> department;
}

void Student::populate_student_data()
{
    // to ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
    
    put_college_name();
    put_department();
    put_semester();
}

void Student::print_student_data() 
{
    cout << "College Name: " << get_college_name() << endl;
    cout << "Department: " << get_department() << endl;
    cout << "Semester: " << get_semester() << endl;
}

