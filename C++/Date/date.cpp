// This file contains class Date's implementation
// Prototyped member functions are defined in this file
#include <iostream>
#include "date.h" // Include class Date's header file

// Constructor to initialize data members
Date::Date( int uMonth, int uDay, int uYear )
{
    setMonth( uMonth ); // initialize month in set function
    setDay( uDay ); // initialize day in set function
    setYear( uYear ); // initialize year in set function
} // end function

// function to set month
void Date::setMonth( int uMonth )
{
    // Check if uMonth is greater than 12
    if ( uMonth > 12 )
    {
        uMonth = 1; // set uMonth to 1
        std::cerr << "Initial date invalide. Date set to 1." << std::endl; // Print error message
    } // end if

    // Check if uMonth is less than 1
    if ( uMonth < 1 )
    {
        uMonth = 1; // set uMonth to 1
        std::cerr << "Initial date invalide. Date set to 1." << std::endl; // Print error message
    } // end if

    month = uMonth; // assign the value of uMonth to month

} // end function

// function to get month
int Date::getMonth()
{
    return month; // return month
} // end function

// function to set day
void Date::setDay( int uDay )
{
    day = uDay; // assign the value of uDay to day
} // end function

// function to get day
int Date::getDay()
{
    return day; // return day
} // end function

// function to set year
void Date::setYear( int uYear )
{
    year = uYear; // assign the value of uYear to year
} // end function

// function to get year
int Date::getYear()
{
    return year; // return year
} // end function

// function to display the date
void Date::displayDate()
{
    // display the date in the form MM/DD/YYYY
    std::cout << "The date is " << month << "/" << day << "/" << year << std::endl;
}
