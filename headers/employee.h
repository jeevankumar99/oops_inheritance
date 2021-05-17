
#include "student.h"

class Employee : public Student
{
    private:
        float salary;

    public:
        void print_salary();
        void put_salary();

        void populate_employee_details();
        void print_employee_details();
};