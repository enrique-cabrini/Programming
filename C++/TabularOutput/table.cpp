// This program prints a table of values.
#include <iostream>

// Function main begins program execution
int main()
{
    int counter = 1; // Define a counter variable

    std::cout << "N\t10*N\t100*N\t1000*N\n"; // Print the header

    // Print the table using a loop
    while ( counter <= 5 )
    {
        std::cout << counter << "\t" << counter * 10 << "\t" << counter * 100 <<
            "\t" << counter * 1000 << std::endl;

        counter += 1; // Increment counter
    } // end while

    return 0; // Indicate the program ended successfully
} // end function
