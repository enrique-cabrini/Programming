/* This program reverses a number */
#include <stdio.h>

int reverse( int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    int number; /* Declare a variable */

    printf( "Enter a number to be reversed: " );
    scanf( "%d", &number );

    printf( "The reverse of %d is %d.\n", number, reverse( number ) ); /* Print the result */

    return 0;
} /* end function */

/* Function to reverse a number */
int reverse( int number )
{
    /* Declare variables */
    int lastNumber;
    int reverse = 0;

    while ( number > 0 )
    {
        lastNumber = number % 10; /* Isolate the last number */
        reverse = ( reverse * 10 ) + lastNumber; /* Append the last number to reverse */
        number /= 10; /* Remove the last number */
    } /* end while */

    return reverse; /* Return reverse to caller */
} /* end function */
