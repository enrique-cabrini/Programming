// This program determines if a customer has exceeded the credit limit on a charge account
#include <iostream>
#include <iomanip>

// Program execution begins at function main
int main()
{
    // Declare variables
    int accountNumber;
    double initialBalance;
    double totalCharges;
    double totalCredits;
    double creditLimit;
    double newBalance;

    std::cout << "Enter account number ( or -1 to quit ): "; // Prompt user for input
    std::cin >> accountNumber; // Read accountNumber from user

    // Use a loop to get other values and find the new balance
    while ( accountNumber != -1 )
    {
        std::cout << "Enter beginning balance: "; // Prompt user for input
        std::cin >> initialBalance; // Read initialBalance from user

        std::cout << "Enter total charges: "; // Prompt user for input
        std::cin >> totalCharges; // Read totalCharges from user

        std::cout << "Enter total credits: "; // Prompt user for input
        std::cin >> totalCredits; // Read totalCredits from user

        std::cout << "Enter credit limit: "; // Prompt user for input
        std::cin >> creditLimit; // Read creditLimit from user

        // Calculate and print the new balance
        newBalance = initialBalance + totalCharges - totalCredits;
        std::cout << "New balance is " << std::setprecision( 2 ) << std::fixed
            << newBalance << std::endl;

        // Print a message if the newBalance exceeds creditLimit
        if ( newBalance > creditLimit )
        {
            std::cout << "Account:      " << accountNumber << std::endl;
            std::cout << "Credit limit: " << std::setprecision( 2 ) << std::fixed
                << creditLimit << std::endl;
            std::cout << "Balance:      " << std::setprecision( 2 ) << std::fixed
                << newBalance << std::endl;
            std::cout << "Credit Limit Exceeded." << std::endl;
        } // end if

        std::cout << "\nEnter account number ( or -1 to quit ): "; // Prompt user for input
        std::cin >> accountNumber; // Read accountNumber from user
    } // end while

    return 0; // Indicate the program ended successfully
} // end function
