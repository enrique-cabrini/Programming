/* This program calculates x raised to the y power */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int x;
    int y;

    /* Define variables */
    int i = 1;
    int power = 1;

    printf( "Enter a value for x: " ); /* Prompt user for input */
    scanf( "%d", &x ); /* Read x from user */

    printf( "Enter a value for y: " ); /* Prompt user for input */
    scanf( "%d", &y ); /* Read y from user */

    /* Calculate the value of power */
    while ( i <= y )
    {
        power *= x;
        i++;
    } /* end while */

    printf( "x to the power y is %d\n", power ); /* Print the value of x to the power y */

    return 0; /* indicate program terminated successfully */
} /* end function */
