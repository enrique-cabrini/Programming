/* This program prints 100 asterisks */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 1; /* Define a counter variable */

    /* Use a loop to print asterisks */
    while ( counter <= 100 )
    {
        printf( "*" );

        /* Print a newline if counter is a multiple of 10 */
        if ( counter % 10 == 0 )
        printf( "\n" );

        counter++; /* Increment counter */
    } /* end while */

    return 0; /* Indicate the program ended successfully */
} /* end function */
