/* This program determines if a number is odd or even */
#include <stdio.h>

int main( void )
{
    /* Variable declaration */
    int number;

    /* Read value from user and store it in variable number */
    printf( "Enter a number: " ); /* Prompt the user to enter a value */
    scanf( "%d", &number );

    /* Determine and display if number is odd or even */
    if ( number % 2 == 0 )
        printf( "%d is an even number\n", number );

    if ( number % 2 != 0 )
        printf( "%d is an odd number\n", number );

    return 0;
} /* end function */
