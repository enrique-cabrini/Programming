/* This program determines if a number is the multiple of another number */
#include <stdio.h>

int multiple( int, int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int number1;
    int number2;

    printf( "Enter two numbers:\n" );
    scanf( "%d%d", &number1, &number2 );

    /* If number2 is a multiple of number2 */
    if ( multiple( number1, number2 ) == 1 )
        printf( "%d is a multiple of %d\n", number2, number1 ); /* Print a message */
    else
        printf( "%d is not a multiple of %d\n", number2, number1 ); /* Print a message */

    return 0;
} /* end function */

/* Function to determine if a number is the multiple of another */
int multiple( int number1, int number2 )
{
    if ( number2 % number1 == 0 )
        return 1;
    else
        return 0;
} /* end function */
