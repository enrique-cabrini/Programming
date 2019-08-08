/* This program uses a loop to print numbers in a table */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 3; /* Define a counter variable */

    printf( "A\tA+2\tA+4\tA+6\n" ); /* Print the header */

    /* Use a while loop to print the numbers in a table */
    while ( counter <= 15 )
    {
        /* Print the body of the table */
        printf( "%d\t%d\t%d\t%d\n", counter, counter + 2, counter + 4, counter + 6 );

        counter += 3; /* Increment counter */
    } /* end while */

    return 0; /* Indicate the program terminated successfully */
} /* end function */
