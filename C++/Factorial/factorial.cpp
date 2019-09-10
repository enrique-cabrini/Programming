// This program finds the factorial of a number
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int number;
    int counter;
    int factorial;

    std::cout << "Enter a number: "; // Prompt user for input
    std::cin >> number; // Read number from user

    factorial = number; // Initialize factorial to number
    counter = number - 1; // Initialize counter to number minus 1

    // If number is greater than 0
    if ( number > 0 )
    {
        // While counter is greater than or equal to 1
        while ( counter >= 1 )
        {
            factorial *= number - counter; // Multiply factorial by number minus counter
            counter--; // Decrement counter
        } // end while
    } // end if
    // If number is 0
    else if ( number == 0 )
        factorial = 1; // set factorial to 1

    // If number is greater than or equal to 0
    if ( number >= 0 )
        std::cout << number << " factorial is " << factorial << std::endl; // Print a message
    else // Otherwise
        std::cerr << "Invalid input!" << std::endl; // Print a message

    return 0; // Indicate the program ended successfully
} // end function
