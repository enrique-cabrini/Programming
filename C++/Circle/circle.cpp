// This program takes a radius and prints the diameter, circumference, and
// area of the circle
#include <iostream>

int main()
{
    // Variable declaration
    int radius;

    // Read value from user and store it in a variable
    std::cout << "Enter a value for the radius: ";
    std::cin >> radius;

    // Calculate and display the diameter
    std::cout << "Diameter is " << radius * 2.0 << std::endl;

    // Calculate and display the circumference
    std::cout << "Circumference is " << 2 * 3.14159 * radius << std::endl;

    // Calculate and display the area
    std::cout << "Area is " << 3.14159 * radius * radius << std::endl;

    return 0;
} // end function
