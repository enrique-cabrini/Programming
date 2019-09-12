// This program calculates the product of odd integers between 1 and 15
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int product = 1;

    // For every number from 1 to 15
    for ( int counter = 1; counter <= 15; counter++ )
    {
        // If counter is an odd number
        if ( counter % 2 != 0 )
            product *= counter; // Multiply product by counter
    } // end for

    std::cout << "The product is: " << product << std::endl; // Print the result

    return 0; // Indicate the program ended successfully
} // end function
