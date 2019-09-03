// This program takes in a radius and prints the diameter, circumference, and area of the
// circle.
#include <iostream>
#include <iomanip>

// Program execution begins at function main
int main()
{
    // Declare variables
    double radius;
    double diameter;
    double circumference;
    double area;
    double pi = 3.14159;

    std::cout << "Enter a value for the radius: "; // Prompt user for input
    std::cin >> radius; // Read radius from user

    // Calculate and print the diameter
    diameter = 2 * radius;
    std::cout << "The diameter is " << std::setprecision( 2 ) << std::fixed
        << diameter << std::endl;

    // Calculate and print the circumference
    circumference = 2 * pi * radius;
    std::cout << "The circumference is " << std::setprecision( 2 ) << std::fixed
        << circumference << std::endl;

    // Calculate and print the area
    area = pi * radius * radius;
    std::cout << "The area is " << std::setprecision( 2 ) << std::fixed
        << area << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
