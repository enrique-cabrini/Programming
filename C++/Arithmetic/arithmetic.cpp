// This program performs some arithmetic operations on two numbers.
#include <iostream>

int main()
{
    // Variable declarations
    int number1;
    int number2;
    int sum;
    int difference;
    int product;
    int quotient;

    // Read values from user and store them in variables
    std::cout << "Enter two numbers:\n";
    std::cin >> number1 >> number2;

    // Calculate and display the sum
    sum = number1 + number2;
    std::cout << "The sum of " << number1 << " and " << number2
        << " is " << sum << std::endl;

    // Calculate and display the difference
    difference = number1 - number2;
    std::cout << "The difference between " << number1 << " and " << number2
        << " is " << difference << std::endl;

    // Calculate and display the product
    product = number1 * number2;
    std::cout << "The product of " << number1 << " and " << number2
        << " is " << product << std::endl;

    // Calculate and display the quotient
    quotient = number1 / number2;
    std::cout << "The quotient of " << number1 << " and " << number2
        << " is " << quotient << std::endl;

    return 0;
} // end function
