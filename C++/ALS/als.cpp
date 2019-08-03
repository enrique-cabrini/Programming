// This program performs some arithmetic functions on three numbers and finds
// the largest and smallest numbers.
#include <iostream>

int main()
{
    // Variable declarations
    int number1;
    int number2;
    int number3;
    int sum;
    int average;
    int product;
    int largestNumber;
    int smallestNumber;

    // Read values from user and store them in variables
    std::cout << "Input three different integers: "; // Prompt user to enter values
    std::cin >> number1 >> number2 >> number3;

    // Calculate and print sum
    sum = number1 + number2 + number3;
    std::cout << "Sum is " << sum << std::endl;

    // Calculate and print average
    average = sum / 3;
    std::cout << "Average is " << average << std::endl;

    // Calculate and print product
    product = number1 * number2 * number3;
    std::cout << "Product is " << product << std::endl;

    // Find and print the smallest number
    smallestNumber = number1;

    if ( number2 < smallestNumber )
        smallestNumber = number2;

    if ( number3 < smallestNumber )
        smallestNumber = number3;

    std::cout << "Smallest is " << smallestNumber << std::endl;

    // Find and print largest number
    largestNumber = number1;

    if ( number2 > largestNumber )
        largestNumber = number2;

    if ( number3 > largestNumber )
        largestNumber = number3;

    std::cout << "Largest is " << largestNumber << std::endl;

    return 0;
} // end function
