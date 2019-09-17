// This program prints a barChart
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;

    std::cout << "Enter five numbers between 1 and 30:\n"; // Prompt user for input
    std::cin >> number1 >> number2 >> number3 >> number4 >> number5; // Read variables from user

    std::cout << "\n"; // Go to a new line

    // For every number from 1 to 5
    for ( int counter = 1; counter <= 5; counter++ )
    {
        int count = 1; // Define a variable

        switch ( counter ) // Check for all possible values of counter
        {
            case 1: // When counter is 1
                while ( count++ <= number1 ) // While count is less than number1
                    std::cout << "*"; // Print an asterisk
                std::cout << "\n"; // Go to a new line
                break; // Exit the loop

            case 2: // When counter is 2
                while ( count++ <= number2 ) // While count is less than number2
                    std::cout << "*"; // Print an asterisk
                std::cout << "\n"; // Go to a new line
                break; // Exit the loop

            case 3: // When counter is 3
                while ( count++ <= number3 ) // While count is less than number1
                    std::cout << "*"; // Print an asterisk
                std::cout << "\n"; // Go to a new line
                break; // Exit the loop

            case 4: // When counter is 4
                while ( count++ <= number4 ) // While count is less than number4
                    std::cout << "*"; // Print an asterisk
                std::cout << "\n"; // Go to a new line
                break; // Exit the loop

            case 5: // When counter is 5
                while ( count++ <= number5 ) // While count is less than number5
                    std::cout << "*"; // Print an asterisk
                std::cout << "\n"; // Go to a new line
                break; // Exit the loop

            default:
                std::cerr << "Program should not get here.\n";
        } // end switch
    } // end for

    return 0; // Indicate program ended successfully
} // end function
