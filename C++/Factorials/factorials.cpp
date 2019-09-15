// This program prints the factorials of 1 to 5
#include <iostream>
#include <iomanip>

// Function main begins program execution
int main()
{
    // Declare variables
    int factorial = 1;

    // Print the header
    std::cout << std::setw( 6 ) << "Number\t|" << std::setw( 11 )
        << "Factorial" << std::endl;

    // For each value of counter from 1 to 5
    for ( int counter = 1; counter <= 5; counter++ )
    {
        factorial *= counter; // Multiply factorial by counter
        // Print the numbers and their factorials in a table
        std::cout << std::setw( 6 ) << counter << "\t|" << std::setw( 11 )
            << factorial << std::endl;
    } // end for

    return 0; // Indicate the program ended successfully
} // end function
