
// To illustrate the use of virtual base class.

#include "headers/person.h"
#include "headers/assignment.h"

class InstagramUser : virtual public Person
{
    private:
        string instagram_username;
        int followers;
    public:
        void get_instagram_username()
        {
            cout << "Enter Instagram username: " << endl;
            getline(cin, instagram_username);
        }

        void get_followers()
        {
            cout << "Enter number of Followers: ";
            cin >> followers;
        }

        void get_instagram_details()
        {
            put_name();
            get_instagram_username();
        }

        void print_instagram_username()
        {
            cout << "Instagram Username: " << instagram_username << endl;
            cout << "Followers: " << followers << endl;
        }
};

class FacebookUser : virtual public Person
{
    private:
        string facebook_username;
        int friends;
    public:
        void get_facebook_username()
        {
            cout << "Enter Instagram username: " << endl;
            getline(cin, facebook_username);
        }

        void get_friends()
        {
            cout << "Enter number of Friends: ";
            cin >> friends;
        }

        void get_facebook_details()
        {
            put_age();
            put_gender();
            get_facebook_username();
        }

        void print_facebook_username()
        {
            cout << "Facebook Username: " << facebook_username << endl;
            cout << "Friends: " << friends << endl;
        }
};

class FacebookFamily : public InstagramUser, public FacebookUser
{
    private:
        string email;
    public:
        void get_all_details()
        {
            get_instagram_details();
            get_facebook_details();
            cout << "Enter email id: ";
            getline(cin, email);
        }

        void print_details()
        {
            print_name();
            print_age();
            print_gender();
            print_facebook_username();
            print_instagram_username();
        }
};

int main()
{
    assignment(6);

    FacebookFamily user;
    user.get_all_details();
    user.print_details();

    return 0;
}
