/* This program finds the result of a number exponent another number */
#include <stdio.h>

int integerPower( int, int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int number;
    int power;

    printf( "Enter base and exponent:\n" );
    scanf( "%d%d", &number, &power );

    printf( "%d exponent %d is %d\n", number, power, integerPower( number, power ) );

    return 0;
} /* end function */

/* Function to calculate base to the power exponent */
int integerPower( int base, int exponent )
{
    int result = 1; /* Declare a variable */

    /* Multiply result by base while counter is less than exponent */
    for ( int counter = 1; counter <= exponent; counter++ )
        result *= base;

    return result; /* Return result to caller */
} /* end function */
