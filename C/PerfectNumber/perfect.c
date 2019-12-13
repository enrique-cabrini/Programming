/* This program determines if a number is perfect */
#include <stdio.h>

/* Function prototypes */
int perfect( int );
void printfFactors( int );

/* Function main begins program execution */
int main( void )
{
    /* Loop 1000 times */
    for ( int counter = 1; counter <= 1000; counter++ )
    {
        if ( perfect( counter ) == 1 )
        {
            printfFactors( counter );
            printf( "%d is a perfect number.\n", counter );
        } /* end if */
    } /* end for */

    return 0;
} /* end function */

/* Function to determine if a number is perfect */
int perfect( int number )
{
    int sum = 0; /* Define a variable */

    for ( int counter = 1; counter < number; counter++ )
    {
        if ( number % counter == 0 )
            sum += counter;
    } /* end for */

    if ( sum == number )
        return 1;
    else
        return 0;
} /* end function */

/* Function to print the factors of a number */
void printfFactors( int number )
{
    for ( int counter = 1; counter <= number; counter++ )
    {
        if ( number % counter == 0 )
            printf( "%d ", counter );
    } /* end for */

    printf( "\n" );
} /* end function */
