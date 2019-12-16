/* This program simulates a coin toss */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip( void ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int headsCount = 0;
    int tailsCount = 0;

    srand( time( NULL ) ); /* Randomize each call */

    /* Loop 100 times */
    for ( int counter = 1; counter <= 100; counter++ )
    {
        flip(); /* simulate a coin toss */

        printf( "%s\n", ( flip() == 0 ? "Tails" : "Heads" ) ); /* Print the coin face */

        if ( flip() == 1 )
            headsCount++;
        else
            tailsCount++;
    } /* end for */

    printf( "\nTotal\nHeads: %d\nTails: %d\n", headsCount, tailsCount ); /* Print the total */

    return 0;
} /* end function */

/* Function to simulate coin toss */
int flip( void )
{
    return ( rand() % 2 ); /* Return 0 or 1 randomly */
} /* end function */
