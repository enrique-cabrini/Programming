// This file contains the implementation of class Account.
// Class Account's member functions are defined in this file
#include <iostream>
#include "account.h" // Class Account's header file

// constructor to initialize data member
Account::Account( int number )
{
    // Check if number is greater than 0
    if ( number >= 0 )
        balance = number; // assign number to balance;
    else
    {
        // assign 0 to balance and print an error message
        balance = 0;
        std::cerr << "Initial balance was invalid. Balance set to 0" << std::endl;
    } // end if...else
} // end function

// function to add amount to the balance
int Account::credit()
{
    int amount; // declare variable

    std::cout << "Amount to add to balance: \n"; // Prompt user for input
    std::cin >> amount; // read amount from user

    balance += amount; // add amount to balance

    return balance; // return balance to caller
} // end function

// function to remove amount from the balance
int Account::debit()
{
    int amount; // declare variable

    std::cout << "Amount to remove from balance: \n"; // Prompt user for input
    std::cin >> amount; // read number from user

    // Check if amount is less than balance
    if ( amount < balance )
        balance -= amount; // subtract amount from balance
    else
        std::cout << "Debit amount exceeded account balance" << std::endl; // print error message

    return balance; // return balance to caller
} // end function

// function to get balance
int Account::getBalance()
{
    return balance;
} // end function
