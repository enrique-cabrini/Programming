// This program tests class Date's capabilities
#include <iostream>
#include "date.h" // Include class Date's header file

// Program execution beginsa at function main
int main()
{
    // Create two class Date objects
    Date date1( 9, 14, 2019 );
    Date date2( 13, 15, 2020 );

    // Display the dates for both objects
    date1.displayDate();
    date2.displayDate();

    return 0; // Indicate the program terminated successfully
} // end function
