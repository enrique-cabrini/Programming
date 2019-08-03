/* This program takes two numbers and determines if the first
   is a multiple of the second */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int number1;
    int number2;

    /* Read a value from the user and store it in variables */
    printf( "Enter two numbers:\n" ); /* Prompt user to enter values */
    scanf( "%d%d", &number1, &number2 );

    /* Determine if first number is a multiple of the second or not */
    if ( number1 % number2 == 0 )
        printf( "%d is a multiple of %d\n", number1, number2 );

    if ( number1 % number2 != 0 )
        printf( "%d is not a multiple of %d\n", number1, number2 );

    return 0;
} /* end function */
