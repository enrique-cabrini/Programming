// This program determines if a number is a palindrome
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int number;
    int secondNumber = 0;
    int remainder;
    int tempNumber;

    std::cout << "Enter a number: "; // Prompt user for input
    std::cin >> number; // Read number from user

    tempNumber = number; // Assign number to tempNumber

    // While tempNumber is not zero
    while ( tempNumber != 0 )
    {
        // Find the reverse of number
        remainder = tempNumber % 10;
        secondNumber = secondNumber * 10 + remainder;
        tempNumber /= 10;
    } // end while

    // If secondNumber equals number
    if ( secondNumber == number )
        std::cout << number << " is a palindrome." << std::endl; // Print a message
    else
        std::cout << number << " is not a palindrome." << std::endl; // Print a message

    return 0; // Indicate the program ended successfully
} // end function
