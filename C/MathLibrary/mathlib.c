/* This program tests the functionality of the math library functions */
#include <stdio.h>
#include <math.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double x;
    double y;

    /* Function sqrt functionality */
    printf( "Enter a number: " );
    scanf( "%lf", &x );
    printf( "sqrt( %.3lf ) is %.3lf.\n", x, sqrt( x ) ); /* Print the result */

    /* Function exp functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "exp( %.3lf ) is %.3lf.\n", x, exp( x ) ); /* Print the result */

    /* Function log functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "log( %.3lf ) is %.3lf.\n", x, log( x ) ); /* Print the result */

    /* Function log10 functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "log10( %.3lf ) is %.3lf.\n", x, log10( x ) ); /* Print the result */

    /* Function fabs functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "fabs( %.3lf ) is %.3lf.\n", x, fabs( x ) ); /* Print the result */

    /* Function ceil functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "ceil( %.3lf ) is %.3lf.\n", x, ceil( x ) ); /* Print the result */

    /* Function floor functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "floor( %.3lf ) is %.3lf.\n", x, floor( x ) ); /* Print the result */

    /* Function pow functionality */
    printf( "\nEnter two numbers: " );
    scanf( "%lf%lf", &x, &y );
    printf( "pow( %.3lf, %.3lf ) is %.3lf.\n", x, y, pow( x, y ) ); /* Print the result */

    /* Function fmod functionality */
    printf( "\nEnter two numbers: " );
    scanf( "%lf%lf", &x, &y );
    printf( "fmod( %.3lf, %.3lf ) is %.3lf.\n", x, y, fmod( x, y ) ); /* Print the result */

    /* Function sin functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "sin( %.3lf ) is %.3lf.\n", x, sin( x ) ); /* Print the result */

    /* Function cos functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "cos( %.3lf ) is %.3lf.\n", x, cos( x ) ); /* Print the result */

    /* Function tan functionality */
    printf( "\nEnter a number: " );
    scanf( "%lf", &x );
    printf( "tan( %.3lf ) is %.3lf.\n", x, tan( x ) ); /* Print the result */

    return 0;
} /* end function */
