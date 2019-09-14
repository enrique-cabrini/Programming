/* This program calculates the factorials of 1 to 5 */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int factorial = 1;

    printf( "%s\t|%10s\n", "Number", "Factorial" ); /* Print the header */

    /* For every number from 1 to 5 */
    for ( int counter = 1; counter <= 5; counter++ )
    {
        factorial *= counter; /* Multiply factorial by counter */
        printf( "%d\t|%10d\n", counter, factorial ); /* Print the result */
    } /* end for */

    return 0; /* Indicate the program ended successfully */
} /* end function */
