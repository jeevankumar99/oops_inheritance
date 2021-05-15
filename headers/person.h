#include <iostream>
#include <climits>

using namespace std;

class Person 
{
    private:
        string name;
        string gender;
        int age;

    public:
        string get_name();
        string get_gender();
        int get_age();

        void put_name(string arg_name); 
        void put_gender(string arg_gender);
        void put_age(int arg_age);
        
        void populate_person_data();
        void print_person_data();
};
     