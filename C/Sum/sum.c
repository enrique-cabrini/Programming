/* This program calculates the sum of the integers 1 to 10 */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int x;
    int sum;

    /* Initialize variables */
    x = 1;
    sum = 0;

    /* Increment sum by x while x is less than or equal to 10 */
    while ( x <= 10 )
    {
        sum += x;
        x++;
    } /* end while */

    printf( "The sum is: %d\n", sum ); /* Print the sum */

    return 0;
} /* end function */
