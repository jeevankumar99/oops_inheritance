
// Definition of class Student as a base class.

#include <iostream>
#include <climits>

using namespace std;

class Student
{
    private:
        string college_name;
        string department;
        int semester;
    
    public:
        string get_college_name();
        string get_department();
        int get_semester();

        void put_college_name();
        void put_department();
        void put_semester();

        void populate_student_data();
        void print_student_data();
};