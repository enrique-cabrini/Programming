// This program calculates the body mass index of the user
#include <iostream>

int main()
{
    // Declare variables
    int weightInPounds;
    int heightInInches;
    int bodyMassIndex;

    std::cout << "Enter your weight in pounds: "; // Prompt user to enter their weight
    std::cin >> weightInPounds; // Read input from user and assign it to weightInPounds

    std::cout << "Enter your height in Inches: "; // Prompt user to enter their height
    std::cin >> heightInInches; // Read input from user and assign it to heightInInches

    // Calculate and display body mass index
    bodyMassIndex = ( weightInPounds * 703 ) / ( heightInInches * heightInInches );
    std::cout << "Your body mass index is " << bodyMassIndex << std::endl;

    // Display body mass index chart
    std::cout << "\nBMI VALUES\n";
    std::cout << "Underweight: less than 18.5\n";
    std::cout << "Normal     : between 18.5 and 24.9\n";
    std::cout << "Overweight : between 25 and 29.9\n";
    std::cout << "Obese      : 30 or greater" << std::endl;

    return 0;
} // end function
