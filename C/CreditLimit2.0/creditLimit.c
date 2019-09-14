/* This program calculates a customer of a company's new credit limit during a recession */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int accountNumber;
    double initialCreditLimit;
    double newCreditLimit;
    double balance;

    /* For each of three customers */
    for ( int customer = 1; customer <= 3; customer++ )
    {
        printf( "Enter the account number: " ); /* Prompt user for input */
        scanf( "%d", &accountNumber ); /* Read accountNumber from user */

        printf( "Enter the inital credit limit: " ); /* Prompt user for input */
        scanf( "%lf", &initialCreditLimit ); /* Read initialCreditLimit from user */

        printf( "Enter current balance: " ); /* Prompt user for input */
        scanf( "%lf", &balance ); /* Read balance from user */

        newCreditLimit = initialCreditLimit / 2.0; /* Calculate the new credit limit */
        printf( "Your new credit limit is %.3lf\n", newCreditLimit ); /* Print the result */

        /* If balance is greater than newCreditLimit */
        if ( balance > newCreditLimit )
            printf( "You have exceeded your credit limit.\n" ); /* Print a message */

        printf( "\n" ); /* Go to a newline */
    } /* end for */

    return 0; /* Indicate the program ended successfully */
} /* end function */
