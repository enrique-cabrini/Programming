// This program determines if three numbers could represent the sides of a right triangle
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int hypotenuse;
    int side1;
    int side2;

    std::cout << "Enter a value for the hypotenuse: "; // Prompt user for input
    std::cin >> hypotenuse; // Read hypotenuse from user

    std::cout << "Enter values for other sides: "; // Prompt user for input
    std::cin >> side1 >> side2; // Read side1 and side2 from user

    // If the sum of side1 squared and side2 squared equals hypotenuse squared
    if ( side1 * side1 + side2 * side2 == hypotenuse * hypotenuse )
    {
        // Print a message
        std::cout << hypotenuse << ", " << side1 << ", and " << side2
            << " are the sides of a right triangle." << std::endl;
    } // end if
    else // Otherwise
    {
        // Print a message
        std::cout << hypotenuse << ", " << side1 << ", and " << side2
            << " are not the sides of a right triangle." << std::endl;
    } // end else

    return 0; // Indicate the program ended successfully
} // end funtion
