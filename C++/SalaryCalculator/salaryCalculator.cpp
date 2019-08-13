// This program calculates the gross salary of workers in a company
#include <iostream>
#include <iomanip>

// Program execution begins at function main
int main()
{
    // Declare variables
    int hours;
    int excessHours;
    double hourlyRate;
    double salary;

    std::cout << "Enter hours worked ( -1 to end ): "; // Prompt user for input
    std::cin >> hours; // Read hours from user

    // Get hourlyRate and calculate salary while hours is not -1
    while ( hours != -1 )
    {
        std::cout << "Enter hourly rate of the employee ( $00.00 ): "; // Prompt user for input
        std::cin >> hourlyRate; // Read hourlyRate from user

        // Calculate salary and add time-and-half if hours is greater than 40
        if ( hours > 40 )
        {
            excessHours = hours - 40;
            salary = ( hourlyRate * hours ) + static_cast< double >( hourlyRate ) / 2;
        } /* end if */
        else // otherwise calculate salary without time-and-half
            salary = hours * hourlyRate;

        // Print the salary
        std::cout << "Salary is $" << std::setprecision( 2 ) << std::fixed << salary << std::endl;

        std::cout << "\nEnter hours worked ( -1 to end ): "; // Prompt user for input
        std::cin >> hours; // Read hours from user
    } // end while

    return 0; // Indicate the program ended successfully
} // end function
