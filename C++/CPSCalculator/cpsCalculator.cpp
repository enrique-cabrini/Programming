// This program calculates the daily driving cost of the user
#include <iostream>

int main()
{
    // Declare variables
    int totalMilesDriven;
    int costPerGallon;
    int averageMilesPerGallon;
    int parkingFees;
    int tollsPerDay;
    int dailyDrivingCost;

    // Prompt user to enter the total miles they drive to work each day.
    std::cout << "Enter the total miles you drive to work and back: ";
    std::cin >> totalMilesDriven; // Read input from user and assign it to totalMilesDriven

    std::cout << "Enter the cost per gallon of gasoline: "; // Prompt user to enter cost of fuel
    std::cin >> costPerGallon; // Read input from user and assign it to costPerGallon

    // Prompt user to enter the average miles they can drive with a gallon of gasoline
    std::cout << "Enter the average miles per gallon of gasoline: ";
    std::cin >> averageMilesPerGallon; // Read input from user and assign it to averageMilesPerGallon

    std::cout << "Enter parking fees paid per day: "; // Prompt user to enter daily parking fees
    std::cin >> parkingFees; // Read input from user and assign it to parkingFees;

    std::cout << "Enter tolls paid per day: "; // Prompt user to enter daily tolls.
    std::cin >> tollsPerDay; // Read input from user and assign it to tollsPerDay

    // Calculate and print daily driving cost
    dailyDrivingCost = ( ( averageMilesPerGallon / totalMilesDriven ) * costPerGallon * 12
                       / 7 ) + parkingFees + tollsPerDay;
    std::cout << "Your daily driving cost is $" << dailyDrivingCost << std::endl;

    return 0;
} // end function
