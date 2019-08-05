/* This program separates the digits of an integer */
#include <stdio.h>

int main( void )
{
    /* Variable declaration */
    int number;

    /* Read value from user and store it in variable number */
    printf( "Enter a five digit number: " );
    scanf( "%d", &number );

    /*  Print digits of the number */
    printf( "%d   %d   ", number / 10000, ( number % 10000 ) / 1000 );
    printf( "%d   %d   ", ( number % 1000 ) / 100, ( number % 100 ) / 10 );
    printf( "%d\n", number % 10 );

    return 0;
} /* end function */
