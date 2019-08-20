// This program finds the largest number out of 10 numbers
#include <iostream>

// Program execution begins at function main
int main()
{
    // Declare variables
    int counter = 1;
    int number;
    int largest = 0;

    // Get numbers and find the largest in a loop
    while ( counter <= 10 )
    {
        std::cout << "Enter a number: "; // Prompt user for input
        std::cin >> number; // Read number from user;

        // If the current value of number is larger than largest
        if ( number > largest )
            largest = number; // Assign the current value of number to largest

        counter++; // Increment counter
    } // end while

    std::cout << "The largest number is " << largest << std::endl; // Print the largest number

    return 0; // Indicate the program ended successfully
} // end function
