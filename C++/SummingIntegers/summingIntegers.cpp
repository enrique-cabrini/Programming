// This program sums integers
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int limit;
    int total = 0;
    int number;

    std::cout << "Enter the number of integers to be summed: "; // Prompt user for input
    std::cin >> limit; // Read limit from user

    // For every number between 1 and limit
    for ( int counter = 1; counter <= limit; counter++ )
    {
        std::cout << "Enter a number: "; // Prompt user for input
        std::cin >> number; // Read number from user

        total += number; // Add number to the current value of total
    } // end for

    std::cout << "The sum of the numbers is " << total << std::endl; // Print the result

    return 0; // Indicate the program ended successfully
} // end function
