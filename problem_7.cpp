
// To Illustrate hybrid inheritance

#include "headers/publication.h"
#include "headers/person.h"
#include "headers/book.h"
#include "headers/assignment.h"


// Author is hybrid class with multilevel, heirarchical and virtual inheritance.
class Author: public Person, virtual public Publication, public Book
{
    private:
        int books_sold;
        string genre;
    public:
        void put_books_sold()
        {
            cout << "Enter the number of books sold: ";
            cin >> books_sold;
        }
        void put_genre()
        {
            cout << "Enter genre: ";
            getline(cin, genre);
        }

        void input_details()
        {
            put_name();
            get_data();
            // to ignore \n as input from the previous cin
            cin.ignore(INT_MAX, '\n');
            put_genre();
            put_books_sold();
        }

        void print_details()
        {
            cout << "Title: " << title << endl << "by" << endl;
            print_name();
            cout << "Genre: " << genre << endl;
            cout << "Price: " << price << endl;
            put_data();
            cout << "Copies Sold: " << books_sold << endl;
        }
};

int main()
{
    assignment(7);

    Author author;

    author.input_details();
    author.print_details();

    return 0;
}