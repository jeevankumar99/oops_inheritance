
// Definition of class Student.

#include <iostream>
#include <climits>
#include "person.h"

using namespace std;

class Student : public Person 
{
    private:
        string college_name;
        string department;
        int semester;
    
    public:
        void print_college_name();
        void print_department();
        void print_semester();

        void put_college_name();
        void put_department();
        void put_semester();

        void populate_student_data();
        void print_student_data();
        void input_details();
        void print_details();
};
