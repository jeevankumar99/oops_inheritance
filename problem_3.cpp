
/*
Store Book and Tape information using Derived Classes
Base class:
->Publication - headers/publication.h and headers/publication.cpp
Derived classes:
->Book - headers/book.h and headers/book.cpp
->Tape - headers/tape.h and headers/tape.cpp
*/

#include "headers/book.h"
#include "headers/tape.h"
#include "headers/assignment.h"

int main()
{

    assignment();

    int number_of_books, number_of_tapes;

    cout << "\n========= Books and Tapes Publication System ===========\n";
    
    cout << "Enter the number of Books to enter their details: ";
    cin >> number_of_books;
    
    cout << "Enter the number of Tapes to enter their details: ";
    cin >> number_of_tapes;

    Book books[number_of_books];
    Tape tapes[number_of_tapes];

    // Book Details Entry
    cout << "\n_____Books Data Entry______" << endl;
    for (int i  = 0; i < number_of_books; i++)
    {
        cout << "\n----Book " << i + 1 << " ----" << endl;
        Book book;
        book.get_data();
        books[i] = book;
    }

    // Tape Details Entry
    cout << "\n_____Tapes Data Entry______" << endl;
    for (int i  = 0; i < number_of_tapes; i++)
    {
        cout << "\n----Tape " << i + 1 << " ----" << endl;
        Tape tape;
        tape.get_data();
        tapes[i] = tape;
    }

    // Print Books details
    cout << "\n_____Printing Books Data_____" << endl;
    for (int i  = 0; i < number_of_books; i++)
    {
        cout << "\n----Book " << i + 1 << " ----" << endl;
        books[i].put_data();
    }

    // Print Tapes details
    cout << "\n_____Printing Tapes  Data_____" << endl;
    for (int i  = 0; i < number_of_tapes; i++)
    {
        cout << "\n----Tape " << i + 1 << " ----" << endl;
        tapes[i].put_data();
    }
}