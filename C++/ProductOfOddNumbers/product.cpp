// This program calculates the sum of odd numbers from 1 to 15
#include <iostream>

// Function main begins program execution
int main()
{
    int product = 1; // Define a variable

    // For every odd number from 1 to 15
    for ( int counter = 1; counter <= 15; counter += 2 )
        product *= counter; // Multiply product by counter

    // Print the result
    std::cout << "The product of odd numbers from 1 to 15 is: " << product << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
