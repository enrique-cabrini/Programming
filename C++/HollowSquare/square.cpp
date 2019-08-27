// This program draws a hollow square with dimensions specified by the user
#include <iostream>

// Program execution begins at function main
int main()
{
    // Variable declarations
    int number;
    int column;
    int row;

    std::cout << "Enter a number: "; // Prompt user for input
    std::cin >> number; // Read number from user

    // If number is greater than 1
    if ( number > 1 )
    {
        row = 1; // Initialize row to 1

        // Use a loop to print the top row
        while ( row == 1 )
        {
            column = 1; // Initialize column to 1

            // While column is less than or equal to row
            while ( column <= number )
            {
                std::cout << "*"; // Print asterisk
                column++; // Increment column
            } // end while

            std::cout << std::endl; // Print a newline
            row++; // Increment row
        } // end while

        row = 1; // Initialize row to 1

        while ( row <= number - 2 )
        {
            column = 1; // Initialize column to 1

            std::cout << "*"; // Print an asterisk

            while ( column <= number - 2 )
            {
                std::cout << " "; // Print a white space
                column++; // Increment column
            } // end while

            std::cout << "*" << std::endl; // Print an asterisk then move to the next line
            row++; // Increment row
        } // end while

        row = 1; // Initialize row to 1

        // Use a loop to print the bottom row
        while ( row == 1 )
        {
            column = 1; // Initialize column to 1

            // While column is less than or equal to row
            while ( column <= number )
            {
                std::cout << "*"; // Print asterisk
                column++; // Increment column
            } // end while

            std::cout << std::endl; // Print a newline
            row++; // Increment row
        } // end while
    } // end if
    else // Otherwise
        std::cout << "*" << std::endl; // Print a single asterisk

    return 0; // Indicate the program ended successfully
}
