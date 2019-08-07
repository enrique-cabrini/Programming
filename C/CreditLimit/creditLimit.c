/* This program determines if a department store customer has exceeded the credit limit
   on a charge account */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int accountNumber;
    float beginningBalance;
    float totalCharges;
    float totalCredits;
    float creditLimit;
    float balance;

    printf( "Enter account number ( -1 to end ): " ); /* Prompt user for input */
    scanf( "%d", &accountNumber ); /* Read accountNumber from user */

    /* Calculate new balance while accountNumber is not -1 */
    while ( accountNumber != -1 )
    {
        printf( "Enter beginning balance: " ); /* Prompt user for input */
        scanf( "%f", &beginningBalance ); /* Read beginningBalance from user */

        printf( "Enter total charges: " ); /* Prompt user for input */
        scanf( "%f", &totalCharges ); /* Read totalCharges from user */

        printf( "Enter total credits: " ); /* Prompt user for input */
        scanf( "%f", &totalCredits ); /* Read totalCredits from user */

        printf( "Enter credit limit: " ); /* Prompt user for input */
        scanf( "%f", &creditLimit ); /* Read creditLimit from user */

        /* Calculate balance and check if it has exceeded credit limit */
        balance = beginningBalance + totalCharges - totalCredits;

        if ( balance > creditLimit )
        {
            printf( "Account:      %d\n", accountNumber ); /* Print account number */
            printf( "Credit Limit: %.2f\n", creditLimit ); /* Print credit limit */
            printf( "Balance:      %.2f\n", balance ); /* Print balance */
            printf( "Credit Limit Exceeded.\n" );
        }

        printf( "\nEnter account number ( -1 to end ): " ); /* Prompt user for input */
        scanf( "%d", &accountNumber ); /* Read accountNumber from user */
    }

    return 0; /* Indicate program terminated successfully */
} /* end function */
