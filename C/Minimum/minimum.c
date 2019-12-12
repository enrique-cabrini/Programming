/* This program returns the smallest of three floating-point numbers */
#include <stdio.h>

double minimum( double, double, double ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double number1;
    double number2;
    double number3;

    printf( "Enter three floating point numbers:\n" );
    scanf( "%lf %lf %lf", &number1, &number2, &number3 );

    /* Print the smallest number */
    printf( "The smallest number is %.4lf.\n", minimum( number1, number2, number3 ) );

    return 0;
} /* end function */

/* Function to return the smallest value */
double minimum( double num1, double num2, double num3 )
{
    double smallest = num1; /* Define a variable */

    if ( num2 < smallest )
        smallest = num2;
    else if ( num3 < smallest )
        smallest = num3;

    return smallest; /* Return smallest value to caller */
} /* end function */
