/*
Store Employee Information using Inheritance
Parent class:
->Person - headers/person.h and headers/person.cpp
Child class:
->Student - headers/student.h and headers/student.cpp
Sub Child class:
->Employee - headers/employee.h and headers/employee.cpp
*/

#include "headers/employee.h"


using namespace std;

// Prints basic details as specified in the problem statement.
void assignment()
{
    cout << "\n\n------OOPS Assignemt 3 (Inheritance) --------" << endl;
    cout << "R Jeevan Kumar \t\t 1MS19ET042" << endl; 
}


int main()
{
    assignment();
    
    int number_of_employees;
    Employee employees[number_of_employees];

    cout << "\n========= Employee Information System ===========\n";
    cout << "Enter the number of employees to enter their details: ";
    cin >> number_of_employees;
    
    // Details Entry
    cout << "\n_____Data Entry______" << endl;
    for (int i  = 0; i < number_of_employees; i++)
    {
        cout << "\n----Employee " << i + 1 << " ----" << endl;
        Employee employee;
        employee.populate_employee_details();
        employees[i] = employee;
    }

    // Print entered details
    cout << "\n_____Printing Data_____" << endl;
    for (int i  = 0; i < number_of_employees; i++)
    {
        cout << "\n----Employee " << i + 1 << " ----" << endl;
        employees[i].print_employee_details();
    }

    return 0;

}


