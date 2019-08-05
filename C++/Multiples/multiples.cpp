// This program determines if a number is a multiple of another number
#include <iostream>

int main()
{
    // Declare variables
    int number1;
    int number2;

    std::cout << "Enter two numbers:\n"; // Prompt user to enter values
    std::cin >> number1 >> number2; // Read values from user and store them in variables

    // Determine if number1 is a multiple of number2
    if ( number1 % number2 == 0 )
        std::cout << number1 << " is a multiple of " << number2 << std::endl;

    if ( number1 % number2 != 0 )
        std::cout << number1 << " is not a multiple of " << number2 << std::endl;

    return 0;
} // end function
