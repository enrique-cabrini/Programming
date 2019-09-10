// This program estimates Euler's number e.
#include <iostream>
#include <iomanip>

// Function main begins program execution
int main()
{
    // Declare variables
    double e = 1;
    int accuracy;
    int counter = 1;
    int factorial = 1;

    std::cout << "Enter the accuracy: "; // Prompt user for input
    std::cin >> accuracy; // Read accuracy from user

    // While counter is less than or equal to accuracy
    while ( counter < accuracy )
    {
        factorial *= counter; // Calculate the factorial
        e += 1.0 / static_cast< double >( factorial ); // Estimate e
        counter++; // Increment counter
    } // end while

    // Print the result
    std::cout << "The value of Euler's number to the specified accuracy is "
        << std::setprecision( 3 ) << std::fixed << e << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
