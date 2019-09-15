// This program calculates compound interest
#include <iostream>
#include <iomanip>
#include <cmath>

// Function main begins program execution
int main()
{
    // Declare variables
    double amount;
    double principal = 1000.0;
    double rate = .05;

    // Print the header
    std::cout << "Year" << std::setw( 8 ) << "Rate" << std::setw( 21 )
        << "Amount on deposit" << std::endl;

    // set floating-point number format
    std::cout << std::fixed << std::setprecision( 2 );

    // For each value of year from 1 to 10
    for ( int year = 1; year <= 10; year++ )
    {
        // For each value of rate from 5 to 10
        for ( rate = 5; rate <= 10; rate++ )
        {
            // Calculate new amount for specified year
            amount = principal * pow( 1.0 + static_cast< double >( rate ) / 100, year );
            // Print the year and the amount
            std::cout << std::setw( 4 ) << year << std::setw( 8 )
                << static_cast< int >( rate ) << std::setw( 21 ) << amount << std::endl;
        } // end for
    } // end for

    return 0; // Indicate the program ended successfully
} // end function
