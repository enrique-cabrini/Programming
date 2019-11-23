// This program draws four different triangles with asterisks
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int row;
    int column;
    int counter;
    int space;

    // Loop 10 times
    for ( row = 1; row <= 10; row++ )
    {
        // Loop until column equals row
        for ( column = 1; column <= row; column++ )
            std::cout << "*"; // Print asterisks

        std::cout << std::endl; // Move to the next line
    } // end for

    std::cout << std::endl; // Move to the next line

    // Loop 10 times
    for ( row = 1; row <= 10; row++ )
    {
        // Loop until column equals row
        for ( column = 10; column >= row; column-- )
            std::cout << "*"; // Print asterisks

        std::cout << std::endl; // Move to the next line
    } // end for

    std::cout << std::endl; // Move to the next line

    // Loop 10 times
    for ( row = 1; row <= 10; row++ )
    {
        space = row - 1; // Define space

        // Loop until counter equals space
        for ( counter = 1; counter <= space; counter++ )
            std::cout << " "; // Print whitespaces

        // Loop until column equals row
        for ( column = 10; column >= row; column-- )
            std::cout << "*"; // Print asterisks

        std::cout << std::endl; // Move to the next line
    } // end for

    std::cout << std::endl; // Move to the next line

    // Loop 10 times
    for ( row = 1; row <= 10; row++ )
    {
        space = 10 - row; // Define space

        // Loop until counter equals space
        for ( counter = 1; counter <= space; counter++ )
            std::cout << " "; // Print whitespaces

        // Loop until column equals row
        for ( column = 1; column <= row; column++ )
            std::cout << "*"; // Print asterisks

        std::cout << std::endl; // Move to the next line
    } // end for

    std::cout << std::endl; // Move to the next line

    return 0; // Indicate program ended successfully
} // end function
