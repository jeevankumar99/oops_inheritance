 
// Implementation of Books

#include "book.h"

void Book::get_data()
{

    cout << "Enter Book title: ";
    // To ignore \n as input for getline
    cin.ignore(INT_MAX, '\n');
    getline(cin, title);

    cout << "Enter the Book's price: ";
    cin >> price;
    
    cout << "Enter Page Count: ";
    cin >> page_count;
}

void Book::put_data()
{
    cout << "Book Title: " << title << endl;
    cout << "Book Price: " << price << endl;
    cout << "Page Count: " << page_count << endl;
}