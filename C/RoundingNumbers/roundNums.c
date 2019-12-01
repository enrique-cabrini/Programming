/* This program rounds numbers to the nearest integer */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double decimalNum;
    int integer;

    printf( "Enter a decimal number (1 to quit): " );
    scanf( "%lf", &decimalNum );

    /* Get unknown number of values from user */
    while ( decimalNum != 1 )
    {
        integer = floor( decimalNum + 0.5 ); /* Round decimal number to nearest integer */
        printf( "Original value: %.3lf\nRounded value: %d\n", decimalNum, integer );

        printf( "\nEnter a decimal number: " );
        scanf( "%lf", &decimalNum );
    } /* end while */

    return 0;
} /* end function */
