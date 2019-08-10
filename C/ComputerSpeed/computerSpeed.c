/* This program determines how fast the computer is */
#include <stdio.h>

/* Program execution begins at fuction main */
int main( void )
{
    int counter = 1; /* Declare a counter variable */

    /* Use a loop to count from 1 to 300,000,000 */
    while ( counter <= 300000000 )
    {
        /* Print a number if it is a multiple of 100,000,000 */
        if ( counter % 100000000 == 0 )
            printf( "%d\n", counter );

        counter++; /* Increment counter */
    } /* end while */

    return 0; /* Indicate the program ended successfully */
} /* end function */
