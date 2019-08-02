/* This program calculates the product of three integers. */
#include <stdio.h>

int main( void )
{
    /* variable declarations */
    int x;
    int y;
    int z;
    int result;

    /* Reading numbers from user and storing them in variables */
    printf( "Enter three integers:\n" );
    scanf( "%d%d%d", &x, &y, &z );

    /* Storing the product of x, y, and z in result */
    result = x * y * z;

    /* Printing the result */
    printf( "The result is %d\n", result );

    return 0;
} /* end function */
