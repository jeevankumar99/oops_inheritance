 
// Implementation of class tape

#include "tape.h"

void Tape::get_data()
{
    cout << "Enter Tape Title: ";
    // to ignore \n as input for getline
    cin.ignore(INT_MAX, '\n');
    getline(cin, title);

    cout << "Enter Tape's Price: ";
    cin >> price;
    
    cout << "Enter Play Time in minutes: ";
    cin >> play_time_minutes;
}

void Tape::put_data()
{
    cout << "Tape Title: " << title << endl;
    cout << "Tape Price: " << price << endl;
    cout << "Play Time: " << play_time_minutes << " minutes" << endl;
}