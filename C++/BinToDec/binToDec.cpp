// This program converts a binary number to a decimal number
#include <iostream>

// Function main begins program execution
int main()
{
    // Variable declarations
    int binaryNumber;
    int decimalNumber = 0;
    int remainder = 0;
    int tempNumber;
    int reverseNumber = 0;
    int divisor = 1;
    int digit;
    int multiplier = 1;

    std::cout << "Enter a binary number: "; // Prompt user for input
    std::cin >> binaryNumber; // Read binaryNumber from the user;

    tempNumber = binaryNumber; // Assign binaryNumber to tempNumber

    // While tempNumber is not zero
    while ( tempNumber != 0 )
    {
        // Find the reverse of binaryNumber
        remainder = tempNumber % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        tempNumber /= 10;
    } // end while

    std::cout << "Reverse " << reverseNumber << std::endl;

    tempNumber = binaryNumber; // Assign binaryNumber to tempNumber

    // While tempNumber is not zero
    while ( tempNumber != 0 )
    {
        divisor *= 10; // Multiply the value of divisor by 10
        tempNumber /= 10; // Divide the value of tempNumber by 10
    } // end while

    divisor /= 10; // Divide the value obtained for divisor by 10 to get the correct value

    // While reverseNumber is not 0
    while ( reverseNumber != 0 )
    {
        // Separate the digits of reverseNumber
        digit = reverseNumber / divisor;
        remainder = reverseNumber % divisor;
        reverseNumber = remainder;
        divisor /= 10;

        // Convert each digit to a decimalNumber
        decimalNumber += digit * multiplier;
        multiplier *= 2;
    } // end while

    // Print the result
    std::cout << binaryNumber << " to decimal is " << decimalNumber << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
