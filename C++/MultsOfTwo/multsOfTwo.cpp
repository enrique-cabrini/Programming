// This program prints an infinite list of the multiples of 2
#include <iostream>

// Function main begins program execution
int main()
{
    int counter = 1; // Define a counter variable

    // While counter is not 0
    while ( counter != 0 )
    {
        // If counter is a multiple of 2
        if ( counter % 2 == 0 )
            std::cout << counter << "  "; // Print counter

        counter++; // Increment counter;
    } // end while

    return 0; // Indicate the program ended successfully
} // end function
