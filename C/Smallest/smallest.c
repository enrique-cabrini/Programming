/* This program finds the smallest of a sequence of numbers */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int limit;
    int smallest;
    int number;

    smallest = 2147483647; /* Initialize smallest */

    printf( "Enter the limit: " ); /* Prompt the user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    /* For every value of counter less than or equal to limit */
    for ( int counter = 1; counter <= limit; counter++ )
    {
        printf( "Enter a number: " ); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        /* If number is less than smallest */
        if ( number < smallest )
            smallest = number; /* Assign number to smallest */
    } /* end for */

    printf( "The smallest is %d\n", smallest ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function */
