// This program determines if three numbers could represent the sides of a triangle.
#include <iostream>

// Function main begins program execution
int main()
{
    // Variable declarations
    int number1;
    int number2;
    int number3;

    std::cout << "Enter the first value: "; // Prompt user for input
    std::cin >> number1; // Read number1 from user

    std::cout << "Enter the second value: "; // Prompt user for input
    std::cin >> number2; // Read number2 from user

    std::cout << "Enter the third value: "; // Prompt user for input
    std::cin >> number3; // Read number3 from user

    // If the sum of number1 and number2 is greater than number3
    if ( number1 + number2 > number3 )
    {
        // If the sum of number1 and number3 is greater than number2
        if ( number1 + number3 > number2 )
        {
            // If the sum of number2 and number3 is greater than number1
            if ( number2 + number3 > number1 )
            {
                // Print a message
                std::cout << number1 << ", " << number2 << " and " << number3
                     << " are the sides of a triangle." << std::endl;
            } // end if
            else
            {
                // Print a message
                std::cout << number1 << ", " << number2 << " and " << number3
                    << " are not the sides of a triangle." << std::endl;
            } // end else
        } // end if
        else
        {
            // Print a message
            std::cout << number1 << ", " << number2 << " and " << number3
                << " are not the sides of a triangle." << std::endl;
        } // end else
    } // end if
    else
    {
        // Print a message
        std::cout << number1 << ", " << number2 << " and " << number3
            << " are not the sides of a triangle." << std::endl;
    } // end else

    return 0; // Indicate the program ended successfully
} // end function
