/* This program finds the value of pi */
#include <stdio.h>

int main( void )
{
    /* Declare variables */
    double pi = 0;
    int sign = 1;
    int denominator = 1;
    int limit;

    printf( "\nEnter the limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    printf( "\n%s\t|%13s", "Term", "Value of Pi" ); /* Print table header */

    /* For every iteration of limit */
    for ( int count = 1; count <= limit; count++ )
    {
        pi += ( 4.0 / denominator ) * sign; /* Calculate the value of pi */
        denominator += 2; /* Increment denominator */
        sign *= -1;

        printf( "\n%4d\t|%13.3f", count, pi ); /* Print table body */
    } /* end for */

    printf( "\n\n" ); /* Go to the next line */

    return 0; /* Indicate program ended successfully */
} /* end function */
