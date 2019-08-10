// This program calculates a salesperson's earnings
#include <iostream>
#include <iomanip>

// Program execution begins at function main
int main()
{
    // Declare variables
    double sales;
    double salary;

    std::cout << "Enter sales in dollars ( -1 to end ): "; // Prompt user for input
    std::cin >> sales; // Read sales from user

    // Use a loop to calculate salary and get the sales of other salespersons
    while ( sales != -1 )
    {
        // Calculate and print the salary
        salary = 200 + static_cast< double >( 9 ) / 100 * sales;
        std::cout << "Salary is: $" << std::setprecision( 2 ) << std::fixed
            << salary << std::endl;

        std::cout << "Enter sales in dollars ( -1 to end ): "; // Prompt user for input
        std::cin >> sales; // Read sales from user
    } // end while

    return 0; // Indicate the program ended successfully
} // end function
