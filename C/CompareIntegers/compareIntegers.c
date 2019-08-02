/* This program compares two integers */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int number1;
    int number2;

    /* Read values form user and store them in variables */
    printf( "Enter two numbers:\n" );
    scanf( "%d%d", &number1, &number2 );

    /* Compare numbers and display the larger number */
    if ( number1 > number2 )
        printf( "%d is larger.\n", number1 );

    if ( number2 > number1 )
        printf( "%d is larger.\n", number2 );

    /* Print a different message if numbers are the same */
    if ( number1 == number2 )
        printf( "These numbers are equal.\n" );

    return 0;
} /* end function */
