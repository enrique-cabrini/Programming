/* This program prints the multiples of two in an infinite loop */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 1; /* Define a counter variable */
    int number = 2; /* Define a counter variable */

    /* Use an infinite loop to print the multiples of 2 */
    while ( counter = 1 )
    {
        number += 1; /* Increment number */

        /* If counter is a multiply of 2 */
        if ( number % 2 == 0 )
            printf( "%d  ", number ); /* Print the number */
    } /* end while */

    return 0; /* Indicate the program ended successfully */
} /* end function */
