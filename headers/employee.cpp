
#include "employee.h"

void Employee::print_salary()
{
    cout << "Salary: " << salary << endl;
}   

void Employee::put_salary()
{
    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::populate_employee_details()
{
    string name_college_salary;
    float salary;
    
    // to ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
    
    put_name();
    put_college_name();
    put_salary();

}

void Employee::print_employee_details()
{
    print_name();
    print_college_name();
    print_salary();
}