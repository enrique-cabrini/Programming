// This program finds the two largest numbers among 10 numbers
#include <iostream>

// Program execution begins at function main
int main()
{
    // Declare variables
    int counter = 1;
    int largest = 0;
    int secondLargest = 0;
    int number;

    // Use a loop to get the numbers and find the largest two
    while ( counter <= 10 )
    {
        std::cout << "Enter a number: "; // Prompt user for input
        std::cin >> number; // Read number from user

        // If the current number is greater than the current value of largest
        if ( number > largest )
        {
            secondLargest = largest; // Assign the current value of largest to secondLargest
            largest = number; // Assign the value of number to largest
        } // end if
        // If the current number is greater than the current value of secondLargest
        else if ( number > secondLargest )
            secondLargest = number; // Assign the value of number to secondLargest

        counter++; // Increment counter
    } // end while

    // Print the two largest numbers
    std::cout << "The two largest numbers are " << largest << " and " << secondLargest << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
