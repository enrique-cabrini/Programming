/* This program calculates the sum of even numbers from 2 to 30 */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    int sum; /* Declare a variable */

    /* For every number from 2 to 30 */
    for ( int counter = 2; counter <= 30; counter += 2 )
        sum += counter; /* Add counter to sum */

    printf( "The sum of even numbers from 2 to 30 is: %d\n", sum ); /* Print the result */
}
