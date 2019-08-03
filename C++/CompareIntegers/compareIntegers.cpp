// This program compares two numbers
#include <iostream>

int main()
{
    // Variable declarations
    int number1;
    int number2;

    // Read values from user and store them in variables
    std::cout << "Enter two numbers:\n"; // Prompt user to enter values
    std::cin >> number1 >> number2;

    // Determine and print the larger number
    if ( number1 > number2 )
        std::cout << number1 << " is larger." << std::endl;

    if ( number2 > number1 )
        std::cout << number2 << " is larger." << std::endl;

    // Print a different message if numbers are equal
    if ( number1 == number2 )
        std::cout << "These numbers are equal." << std::endl;

    return 0;
} // end function
