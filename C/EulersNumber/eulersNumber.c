/* This program estimates the value of Euler's number e */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    float e = 1;
    int accuracy;
    int factorial = 1;
    int counter = 1;

    printf( "Enter the accuracy: " ); /* Prompt user for input */
    scanf( "%d", &accuracy ); /* Read accuracy from user */

    while ( counter < accuracy )
    {
        factorial *= counter; /* Calculate the factorial */
        e += 1.0 / ( float ) factorial; /* Calculate Euler's number */
        counter++; /* Increment counter */
    } /* end while */

    /* Print the result */
    printf( "The value of Euler's number, e to the %dth position ", accuracy );
    printf( "is %.2f.\n", e );

    return 0; /* Indicate the program ended successfully */
} /* end function */
