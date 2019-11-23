// This program estimates the value of pi.
#include <iostream>
#include <iomanip>

// Function main begins program execution
int main()
{
    // Declare variables
    double pi = 0;
    int limit;
    int sign = 1;
    int denominator = 1;

    std::cout << "Enter limit: "; // Prompt user for input
    std::cin >> limit; // Read limit from user

    std::cout << "\nTerm|" << std::setw( 12 ) << "Value of pi"; // Print table head

    // For every value of limit
    for ( int counter = 1; counter <= limit; counter++ )
    {
        pi += ( 4.0 / denominator ) * sign; // Calculate for pi
        denominator += 2; // Increase denominator
        sign *= -1; // Change the sign

        std::cout << "\n" << std::setw( 4 ) << counter << "|" << std::setw( 12 )
            << std::setprecision( 6 ) << std::fixed << pi; // Print the table head
    } // end for

    std::cout << "\n" << std::endl; // Go to next two lines

    return 0; // Indicate program ended successfully
} // end function
