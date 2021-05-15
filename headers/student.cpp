
#include "student.h"

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

void Student::put_college_name(string arg_college_name)
{
    college_name = arg_college_name;
}

void Student::put_department(string arg_department)
{
    department = arg_department;
}

void Student::put_semester(int arg_semester)
{
    semester = arg_semester;
}

void Student::populate_student_data()
{
    string college_department;
    int semester;
    
    cout << "Enter College name: ";
    // to ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
    getline(cin, college_department);
    put_college_name(college_department);
    
    cout << "Enter Department: ";
    getline(cin, college_department);
    put_department(college_department);
    
    cout << "Enter Semester: ";
    cin >> semester;
    put_semester(semester);
}

void Student::print_student_data() 
{
    cout << "College Name: " << get_college_name() << endl;
    cout << "Department: " << get_department() << endl;
    cout << "Semester: " << get_semester() << endl;
}

void Student::input_details()
{
    populate_person_data();
    populate_student_data();
}

void Student::print_details()
{
    print_person_data();
    print_student_data();
}
