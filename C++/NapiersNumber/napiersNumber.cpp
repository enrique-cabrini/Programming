// This program estimates Napier's number
#include <iostream>

// Function main begins program execution
int main()
{
    // Declare variables
    double napiersNumber = 1;
    int limit;
    int x;
    int factorial = 1;
    int counter = 1;
    int count = 1;

    std::cout << "Enter x: "; // Prompt user for input
    std::cin >> x; // Read x from user

    std::cout << "Enter limti: "; // Prompt user for input
    std::cin >> limit; // Read limit from user

    double tempNum = x; // Temporary variable to hold x

    // While counter is less than limit
    while ( counter < limit )
    {
        factorial *= counter; // Find the factorial
        napiersNumber += static_cast< double >( tempNum ) / factorial; // Calculate for Napier's number

        // While count is less than or equals counter
        while ( count <= counter )
        {
            tempNum *= x; // Multiply the current value of tempNum by x
            count++; // Increment count
        } // end while

        counter++; // Increment counter
    } // end while

    std::cout << "E exponent " << x << " to term " << limit << " is " << napiersNumber << std::endl; // Print the result

    return 0; // Indicate the program ended successfully
} // end function
