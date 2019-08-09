// This program creates a date class and display's the date
// This file contains class Date's interface

// Class Date's interface
class Date
{
public: // access specifier public
    // Prototype member functions
    Date( int, int, int );
    void setMonth( int );
    int getMonth();
    void setDay( int );
    int getDay();
    void setYear( int );
    int getYear();
    void displayDate();
private: // access specifier private
    // Declare data members
    int month;
    int day;
    int year;
}; // end class
