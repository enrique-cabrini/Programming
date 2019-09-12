/* This program finds the average of a sequence of numbers */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int number;
    int total = 0;
    int numberOfInts = 0;
    double average;

    /* For every value of counter until the user enters 9999 */
    for ( int counter = 1; ; counter++ )
    {
        printf( "Enter a number: "); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        /* If number is 9999 */
        if ( number == 9999 )
            break; /* exit the loop */

        total += number; /* Add number to the current value of total */
        numberOfInts += 1; /* Increment numberOfInts by 1 */
    } /* end for */

    average = ( double ) total / numberOfInts; /* Calculate the average */
    printf( "The average is: %.3f\n", average ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function */
