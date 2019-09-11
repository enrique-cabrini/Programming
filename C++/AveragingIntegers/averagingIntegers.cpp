// This program averages integers
#include <iostream>
#include <iomanip>

// Function main begins program execution
int main()
{
    // Declare variables
    int number;
    int total = 0;
    int numberOfInts = 0;
    double average = 0;

    // For every value of counter from 1 till the user enters 9999
    for ( int counter = 1; ; counter++ )
    {
        std::cout << "Enter a number: "; // Prompt user for input
        std::cin >> number; // Read number from user

        // If number equals 9999
        if ( number == 9999 )
            break; // Exit the loop

        total += number; // Add number to the current value of total
        numberOfInts += 1; // Increment counter by 1
    } // end for

    average = static_cast< double >( total ) / numberOfInts; // Calculate the average
    // Print the result
    std::cout << "The average is " << std::setprecision( 3 ) << std::fixed
        << average << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
