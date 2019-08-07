// This is the client program for class Account.
#include <iostream>
#include "account.h" // Class Account's header file

// Program execution begins at function main
int main()
{
    int userDecision; // Declare variable
    int account; // Declare variable

    // Create two objects for class Account
    Account account1( 400 );
    Account account2( -23 );

    std::cout << "What do you want to do? ( 1 to add, 2 to remove ): "; // Prompt user for input
    std::cin >> userDecision; // read userDecision from user

    // Perform an action based on the user's decision
    if ( userDecision == 1 )
    {
        std::cout << "To which account: "; // Prompt user for input
        std::cin >> account; // read account from user

        if ( account == 1 )
            account1.credit(); // add amount to account1

        if ( account == 2 )
            account2.credit(); // add amount to account2
    } // end if

    if ( userDecision == 2 )
    {
        std::cout << "To which account: "; // Prompt user for input
        std::cin >> account; // read account from user

        if ( account == 1 )
            account1.debit(); // remove amount from account1

        if ( account == 2 )
            account2.debit(); // remove amount from account2
    } // end if

    // Print balance in accounts
    std::cout << "Balance in account1: " << account1.getBalance() << std::endl;
    std::cout << "Balance in account2: " << account2.getBalance() << std::endl;

    return 0; // Indicate the program terminated successfully
} // end function
