/* This program prints the numbers 1 to 10 in a table form with 10 times the numbers,
   100 times the number, and 1000 times the number */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 1; /* Define a counter variable */

    printf( "N\t10*N\t100*N\t1000*N\n" ); /*Print the header */

    /* Use a loop to print the table */
    while ( counter <= 10 )
    {
        /* Print the table */
        printf( "%d\t%d\t%d\t%d\n", counter, counter * 10, counter * 100, counter * 1000 );

        counter++; /* Increment counter */
    } /* end while */

    return 0; /* Indicate the program terminated successfully */
} /* end function */
