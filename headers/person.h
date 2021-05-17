
// Definition of class Person.

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
        void print_name();
        void print_gender();
        void print_age();

        void put_name(); 
        void put_gender();
        void put_age();
        
        void populate_person_data();
        void print_person_data();
};
     