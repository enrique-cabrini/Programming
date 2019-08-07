/* This program calculates simple interest */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    float principal;
    float rate;
    float interest;
    int days;

    printf( "Enter loan principal ( -1 to end ): " ); /* Prompt user for input */
    scanf( "%f", &principal ); /* Read principal from user */

    /* Calculate interest while principal is not -1 */
    while ( principal != -1 )
    {
        printf( "Enter loan rate: " ); /* Prompt user for input */
        scanf( "%f", &rate ); /* Read rate from user */

        printf( "Enter term of the loan in days: " ); /* Prompt user for input */
        scanf( "%d", &days ); /* Read days from user */

        /* Calculate and print the interest */
        interest = principal * rate * days / 365;
        printf( "The interest charge is $%.2f\n", interest );

        printf( "\nEnter loan principal ( -1 to end ): " ); /* Prompt user for input */
        scanf( "%f", &principal ); /* Read principal from user */
    }

    return 0; /* Indicate the program terminated successfully */
} /* end function */
