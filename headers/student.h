
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
        string get_college_name();
        string get_department();
        int get_semester();

        void put_college_name(string arg_college_name);
        void put_department(string arg_department);
        void put_semester(int arg_semester);

        void populate_student_data();
        void print_student_data();
        void input_details();
        void print_details();
};
