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
        Person(string arg_name, string arg_gender, int arg_age)
        {
            name = arg_name;
            gender = arg_gender;
            age = arg_age;
        }    

}
