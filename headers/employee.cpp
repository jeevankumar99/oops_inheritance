
#include "employee.h"

float Employee::get_salary()
{
    return salary;
}   

void Employee::put_salary(float arg_salary)
{
    salary = arg_salary;
}

void Employee::populate_employee_details()
{
    string name_college_salary;
    float salary;
    
    cout << "Enter Employee name: ";
    // to ignore \n as input from the previous cin
    cin.ignore(INT_MAX, '\n');
    getline(cin, name_college_salary);
    put_name(name_college_salary);
    
    
    cout << "Enter College name: ";
    // to ignore \n as input from the previous cin
    getline(cin, name_college_salary);
    put_college_name(name_college_salary);
   
    cout << "Enter Salary: ";
    cin >> salary;
    put_salary(salary);

}

void Employee::print_employee_details()
{
    cout << "Employee Name: " << get_name() << endl;
    cout << "College: " << get_college_name() << endl;
    cout << "Salary: " << get_salary() << endl;
}