/* This program prints a board with asterisks */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 0; /* Define a counter variable */

    /* Draw the board using a loop */
    while ( counter < 8 * 8 )
    {
        /* If counter is a multiple of 8 */
        if ( counter > 0 && counter % 8 == 0 )
            printf( "\n" ); /* Print a newline */

        if ( ( counter + 8 ) % 16 == 0 ) /* If counter + 8 is a multiple of 16 */
            printf( " " ); /* Print a space */

        printf( "* " ); /* Print an asterisk followed by a space */

        counter++; /* Increment counter */
    } /* end while */

    printf( "\n" ); /* Print a newline */

    return 0; /* Indicate the program ended successfully */
} /* end function */
