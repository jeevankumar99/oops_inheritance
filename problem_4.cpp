#include "headers/person.h"
#include "headers/student_solo.h"

class Employee : public Person, Student
{
    private:
        string position;
        float salary;
    
    public:
        void populate_data()
        {
            put_name();
            put_college_name();
            
            cout << "Enter Position: ";
            getline(cin, position);

            cout << "Enter Salary: ";
            cin >> salary;
        }

        void print_data()
        {
            print_person_data();
            print_student_data();
        }

        
};

