/* This program finds the hypotenuse for two given sides */
#include <stdio.h>
#include <math.h>

double hypotenuse( double, double ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    double side1;
    double side2;
    double side3;

    /* Loop three times */
    for ( int triangle = 1; triangle <= 3; triangle++ )
    {
        printf( "Enter the two sides: " );
        scanf( "%lf%lf", &side1, &side2 );

        side3 = hypotenuse( side1, side2 ); /* Find the hypotenuse for the given sides */

        /* Print the result */
        printf( "Triangle : %d\nSide 1 : %.1lf\n", triangle, side1 );
        printf( "Side 2 : %.1lf\nHypotenuse : %.1lf\n", side2, side3 );

        printf( "\n" );
    }
    return 0;
} /* end function */

/* Function to find the hypotenuse for two given sides */
double hypotenuse( double a, double b )
{
    double c;

    c = sqrt( ( a * a ) + ( b * b ) ); /* Find the hypotenuse */
    return c; /* Return hypotenuse to caller */
} /* end function */
