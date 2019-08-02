// This program calculates the product of three numbers.
#include <iostream>

int main()
{
    // Variable declarations.
    int x;
    int y;
    int z;
    int result;

    // Read values from user and store them in variables
    std::cout << "Enter three numbers:\n";
    std::cin >> x >> y >> z;

    // Calculate the product and display it
    result = x * y * z;
    std::cout << "The product is " << result << std::endl;

    return 0;
} // end function
