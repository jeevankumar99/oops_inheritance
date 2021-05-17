
// Illustration of private and public classes

#include <iostream>
#include "headers/assignment.h"

using namespace std;

class BankAccountDetails 
{
    protected:
        int acc_no;
        float balance;

    public:
        string account_holder;

        int access_acc_no()
        {
            return acc_no;
        }

        float access_balance()
        {
            return balance;
        }

        void put_acc_no(int arg_acc_no)
        {
            acc_no = arg_acc_no;
        }

        void put_balance(float arg_acc_holder)
        {
            balance = arg_acc_holder;
        }

};


// Privately derived class
class Customer : private BankAccountDetails
{
    private:
        string name;
        int year_joined;

    public:
        void input_details()
        {
            int acc_number;
            float balance;

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Year joined: ";
            cin >> year_joined;

            // account holder can be accessed as it is public
            account_holder = name;

            cout << "Enter Account number: " << endl;
            cin >> acc_number;

            // But account number can be access only through the public function
            put_acc_no(acc_number);

            cout << "Enter Account Balance: " << endl;
            cin >> balance;

            put_balance(balance);
        }

        void print_details()
        {
            // accessed without public function
            cout << "Account Holder / Name : " << account_holder << endl;

            cout << "Year Joined: " << year_joined << endl;

            // private members access through a function.
            cout << "Account Number: " << access_acc_no() << endl;
            cout << "Account Balance: " << access_balance() << endl;
        }

};

// Publically derived class
class PANLink : public BankAccountDetails
{
    private:
        int pan_number;
        int linked_acc_no;
        string linked_acc_holder;
    
    public:
        void link_bank_with_pan()
        {
            cout << "Enter PAN number: ";
            cin >> pan_number;
             
             // Can be accessed without function as
             // inheritance is public.
            linked_acc_holder = account_holder;
            linked_acc_no = acc_no;

            cout << "\n PAN linked with Bank Details!\n" << endl;
        }
};

int main()
{
    assignment();

    Customer customer;
    customer.input_details();

    PANLink link_customer;
    link_customer.link_bank_with_pan();

    customer.print_details();

    return 1;
}

