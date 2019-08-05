// This program separates the digits of a five-digit integer
#include <iostream>

int main()
{
    // Declare variable
    int number;

    std::cout << "Enter a five digit number: "; // Prompt user to enter a number
    std::cin >> number; // Read input from user and assign it to variable number

    // Separate the digits of the number and print them
    std::cout << number / 10000 << "   " << ( number % 10000 ) / 1000 << "   "
              << ( number % 1000 ) / 100 << "   " << ( number % 100 ) / 10
              << "   " << number % 10 << std::endl;

    return 0;
} // end function
