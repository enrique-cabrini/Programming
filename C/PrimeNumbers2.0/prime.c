/* This program determines if a number is prime */
#include <stdio.h>

void prime( int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    for ( int counter = 2; counter <= 10000; counter++ )
        prime( counter );

    return 0;
} /* end function */

/* Function to determine if a number is prime */
void prime( int number )
{
    int factors = 0; /* Define a variable */

    if ( number > 1 )
    {
        for ( int counter = 2; counter <= ( number / 2 ); counter++ )
        {
            if ( number % counter == 0 )
                factors++;
        } /* end for */
    } /* end if */

    if ( factors == 0 )
        printf( "%d is a prime number.\n", number ); /* Print the result */
} /* end function */
