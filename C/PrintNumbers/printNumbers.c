/* This program prints the numbers 1 to 10 in a loop */
#include <stdio.h>

/* Function execution begins at function main */
int main( void )
{
    int counter = 1; /* Declare a counter variable */

    /* Print numbers while counter is less than or equal to 10 */
    while ( counter <= 10 )
    {
        printf( "%d   ", counter ); /* Print counter */
        counter++; /* Increment counter */
    }

    printf( "\n" ); /* Go to a newline */

    return 0; /* Indicate the program terminated successfully */
} /* end function */
