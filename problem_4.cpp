#include "headers/person.h"
#include "headers/student_solo.h"

class Employee : public Person, public Student
{
    private:
        string position;
        float salary;
    
    public:
        void populate_data()
        {
            // to ignore \n as input from the previous cin
            cin.ignore(INT_MAX, '\n');
            
            put_name();
            put_college_name();
            
            cout << "Enter Position: ";
            getline(cin, position);

            cout << "Enter Salary: ";
            cin >> salary;
        }

        void print_data()
        {
            print_name();
            print_college_name();

            cout << "Position: " << position << endl;
            cout << "Salary: " << salary << endl;
        }
};

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
        employee.populate_data();
        employees[i] = employee;
    }

    // Print entered details
    cout << "\n_____Printing Data_____" << endl;
    for (int i  = 0; i < number_of_employees; i++)
    {
        cout << "\n----Employee " << i + 1 << " ----" << endl;
        employees[i].print_data();
    }

    return 0;

}

