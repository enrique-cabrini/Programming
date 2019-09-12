// This program finds the smallest of a sequence of numbers
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int limit;
    int smallest;
    int number;

    smallest = 2147483647; // Initialize smallest

    std::cout << "Enter the limit: "; // Prompt user for input
    std::cin >> limit; // Read limit from user

    // For every value of counter less than or equal to limit
    for ( int counter = 1; counter <= limit; counter++ )
    {
        std::cout << "Enter a number: "; // Prompt user for input
        std::cin >> number; // Read number from user

        // If number is less than smallest
        if ( number < smallest )
            smallest = number; // Assign number to smallest
    } // end for

    std::cout << "The smallest is: " << smallest << std::endl; // Print the result

    return 0; // Indicate the program ended successfully
} // end for
