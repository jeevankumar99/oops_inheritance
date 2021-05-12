/*
Store Student information using Inheritance
Person - Parent/BaseClass
Student - Child Class
*/

#include <iostream>

using namespace std;

class Person 
{
    private:
        string name;
        string gender;
        int age;

    public:
        string get_name()
        {
            return name;
        }

        string get_gender()
        {
            return gender;
        }

        int get_age()
        {
            return age;
        }

        void put_name(string arg_name) 
        {
            name = arg_name;
        }   

        void put_gender(string arg_gender)
        {
            gender = arg_gender;
        }
        
        void put_age(int arg_age)
        {
            age = arg_age;
        }

        void populate_person_data()
        {
            string name_gender;
            int age;
            
            cout << "Enter name: ";
            cin >> name_gender;
            put_name(name_gender);
            
            cout << "Enter Gender: ";
            cin >> name_gender;
            put_gender(name_gender);
            
            cout << "Enter age: ";
            cin >> age;
            put_age(age);
        }

        void print_person_data()
        {
            cout << "Name: " << get_name() << endl;
            cout << "Gender: " << get_gender() << endl;
            cout << "Age: " << get_age() << endl;
        }
        
};

class Student : public Person 
{
    private:
        string college_name;
        string department;
        int semester;
    
    public:
        string get_college_name()
        {
            return college_name;
        }

        string get_department()
        {
            return department;
        }

        int get_semester()
        {
            return semester;
        }

        void put_college_name(string arg_college_name)
        {
            college_name = arg_college_name;
        }

        void put_department(string arg_department)
        {
            department = arg_department;
        }

        void put_semester(int arg_semester)
        {
            semester = arg_semester;
        }

        void populate_student_data()
        {
            string college_department;
            int semester;
            
            cout << "Enter College name: ";
            cin >> college_department;
            put_college_name(college_department);
            
            cout << "Enter Department: ";
            cin >> college_department;
            put_department(college_department);
            
            cout << "Enter Semester: ";
            cin >> semester;
            put_semester(semester);
        }

        void print_student_data() 
        {
            cout << "College Name: " << get_college_name() << endl;
            cout << "Department: " << get_department() << endl;
            cout << "Semester: " << get_semester() << endl;
        }

        void input_details()
        {
            populate_person_data();
            populate_student_data();
        }

        void print_details()
        {
            print_person_data();
            print_student_data();
        }
};


void assignment()
{
    cout << "\n\n------OOPS Assignemt 3 (Inheritance) --------" << endl;
    cout << "R Jeevan Kumar \t\t 1MS19ET042" << endl; 
}


int main()
{
    assignment();
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


