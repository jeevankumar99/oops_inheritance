
// Implementation of Student's members and functions.

#include "student_solo.h"

void Student::print_college_name()
{
    cout << "College Name: " << college_name << endl;
}

void Student::print_department()
{
    cout << "Department: " << department << endl;
}

void Student::print_semester()
{
    cout << "Semester: " << semester << endl;
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
    cin >> semester;
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
    print_college_name();
    print_department();
    print_semester();
}

