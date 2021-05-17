/*
Store Student information using Inheritance
Parent class:
->Person - headers/person.h and headers/person.cpp
Child class:
->Student - headers/student.h and headers/student.cpp
*/

#include "headers/student.h"
#include "headers/assignment.h"


int main()
{
    assignment(1);
    
    int number_of_students;
    Student students[number_of_students];

    cout << "\n========= Student Information System ===========\n";
    cout << "Enter the number of students to enter their details: ";
    cin >> number_of_students;
    
    // Details Entry
    cout << "\n_____Data Entry______" << endl;
    for (int i  = 0; i < number_of_students; i++)
    {
        cout << "\n----Student " << i + 1 << " ----" << endl;
        Student student;
        student.input_details();
        students[i] = student;
    }

    // Print entered details
    cout << "\n_____Printing Data_____" << endl;
    for (int i  = 0; i < number_of_students; i++)
    {
        cout << "\n----Student " << i + 1 << " ----" << endl;
        students[i].print_details();
    }

    return 0;

}


