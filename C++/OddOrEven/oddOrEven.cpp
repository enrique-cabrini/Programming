// This program determines if a number is odd or even.
#include <iostream>

int main()
{
    // Declare variable
    int number;

    std::cout << "Enter a number: "; // Prompt user to enter number
    std::cin >> number; // Read number from user and store it in a variable

    // Determine if the number is odd or even
    if ( number % 2 == 0 )
        std::cout << number << " is an even number." << std::endl;

    if ( number % 2 != 0 )
        std::cout << number << " is an odd number." << std::endl;

    return 0;
} // end function
