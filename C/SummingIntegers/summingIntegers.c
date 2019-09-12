/* This program sums a sequence of numbers */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int limit;
    int sum = 0;
    int number;

    printf( "Enter the limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    /* For every value of counter less than or equal to limit */
    for ( int counter = 1; counter <= limit; counter++ )
    {
        printf( "Enter a number: " ); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        sum += number; /* Add the current number to the current value of sum */
    } /* end for */

    printf( "The sum of the numbers is: %d\n", sum ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function */
