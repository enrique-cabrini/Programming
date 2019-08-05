// This program determines the largest and smallest numbers out of five numbers
#include <iostream>

int main()
{
    // Variable declarations
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    int largestNumber;
    int smallestNumber;

    // Ask user for numbers and store them in variables
    std::cout << "Enter five numbers:\n"; // Prompt user to enter numbers
    std::cin >> number1 >> number2 >> number3 >> number4 >> number5;

    // Determine and print the largest number
    largestNumber = number1;

    if ( number2 > largestNumber )
        largestNumber = number2;

    if ( number3 > largestNumber )
        largestNumber = number3;

    if ( number4 > largestNumber )
        largestNumber = number4;

    if ( number5 > largestNumber )
        largestNumber = number5;

    std::cout << "The largest number is " << largestNumber << std::endl;

    // Determine and print the smallest number
    smallestNumber = number1;

    if ( number2 < smallestNumber )
        smallestNumber = number2;

    if ( number3 < smallestNumber )
        smallestNumber = number3;

    if ( number4 < smallestNumber )
        smallestNumber = number4;

    if ( number5 < smallestNumber )
        smallestNumber = number5;

    std::cout << "The smallest number is " << smallestNumber << std::endl;
}
