
#include "student.h"

class Employee : public Student
{
    private:
        float salary;

    public:
        float get_salary();

        void put_salary(float salary);

        void populate_employee_details();

        void print_employee_details();
};