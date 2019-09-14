/* This program prints a bar chart */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int number;
    int barCount = 1;

    /* For every number from 1 to 5 */
    for ( int counter = 1; counter <= 5; counter++ )
    {
        printf( "Enter a number between 1 and 30: " ); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        barCount = 1; /* Initialize barCount to 1 for every iteration */

        /* While barCount is less than or equal to number */
        while ( barCount <= number )
        {
            printf( "*" ); /* Print an asterisk */
            barCount++; /* Increment barCount */
        } /* end while */

        printf( "\n" ); /* Go to a newline */
    }

    return 0; /* Indicate the program ended successfully */
} /* end function */
