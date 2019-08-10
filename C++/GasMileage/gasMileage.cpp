// This program calculates a car's gas mileage
#include <iostream>
#include <iomanip>

// Program execution begins at function main
int main()
{
    // Declare variables
    int milesDriven;
    int gallonsUsed;
    double milesPerGallon;
    int totalMilesDriven = 0;
    int totalGallonsUsed = 0;
    double totalMilesPerGallon;

    std::cout << "Enter miles driven ( -1 to quit ): "; // Prompt user for input
    std::cin >> milesDriven; // Read miles driven from user

    // Use a loop to get gallons used and calculate mpg
    while ( milesDriven != -1 )
    {
        std::cout << "Enter gallons used: "; // Prompt user for input
        std::cin >> gallonsUsed; // Read gallonsUsed from user

        // Calculate and print mpg
        milesPerGallon = static_cast< double >( milesDriven ) / gallonsUsed;
        std::cout << "MPG this tankful: " << std::setprecision( 6 ) << std::fixed
            << milesPerGallon << std::endl;

        totalGallonsUsed += gallonsUsed; // Increment totalGallonsUsed by gallonsUsed
        totalMilesDriven += milesDriven; // Increment totalMilesDriven by milesDriven

        // Check if totalMilesDriven is greater than 0
        if ( totalGallonsUsed > 0 )
        {
            // Calculate and print total mpg
            totalMilesPerGallon = static_cast< double >( totalMilesDriven ) / totalGallonsUsed;
            std::cout << "Total MPG: " << std::setprecision( 6 ) << std::fixed
                << totalMilesPerGallon << std::endl;
        } // end if
        else
        {
            std::cerr << "Nothing was inputted.\n";
            std::cerr << "Total MPG is 0" << std::endl;
        } // end else

        std::cout << "\nEnter miles driven ( -1 to quit ): "; // Prompt user for input
        std::cin >> milesDriven; // Read miles driven from user
    } // end while

    return 0; // Indicate program terminated successfully
} // end function
