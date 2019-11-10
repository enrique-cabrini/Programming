/* This program approximates the value of pi */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double pi = 0;
    int limit;
    int sign = 1;
    int denominator = 1;

    printf( "Enter the limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    printf( "\n%4s|%12s", "Term", "Value of pi" ); /* Print table header */

    /* For every iteration of limit */
    for ( int count = 1; count <= limit; count++ )
    {
        pi += ( 4.0 / denominator ) * sign; /* Calculate for pi */
        denominator += 2; /* Increase denominator by 2 */
        sign *= -1; /* Change the state of the sign */

        printf( "\n%4d|%12f", count, pi ); /* Print the result */
    } /* end for */

    printf( "\n\n" ); /* Go to next two lines */

    return 0; /* Indicate the program ended successfully */
} /* end function main */
