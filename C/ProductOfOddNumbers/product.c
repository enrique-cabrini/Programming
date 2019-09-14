/* This program calculates the product of odd numbers from 1 to 15 */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    int product = 1; /* Declare a variable */

    /* For every number from 1 to 15 */
    for ( int counter = 1; counter <= 15; counter += 2 )
        product *= counter; /* Multiply product by counter */

    printf( "The product of odd numbers from 1 to 15 is: %d\n", product ); /* Print result */

    return 0; /* Indicate the program ended successfully */
} /* end function */
