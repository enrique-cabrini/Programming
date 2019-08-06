/* This program determines the largest ( if any ) of two numbers */
#include <stdio.h>

/* Program execution begins in function main */
int main( void )
{
    /* Declare variables */
    int x;
    int y;
    int largestNumber;

    printf( "Enter two numbers: " ); /* Prompt user for input */
    scanf( "%d%d", &x, &y ); /* Read x, and y from user */

    // Check if x is not equal to y and find the largest
    if ( x != y )
    {
        largestNumber = x;

        if ( y > largestNumber )
            largestNumber = y;

        printf( "The largest is %d\n", largestNumber ); /* Display largest number */
    }
    else /* Print a message if x and y are equal */
        printf( "%d and %d are equal\n", x, y );

    return 0; /* indicate that the program terminated successfully */
} /* end function */
