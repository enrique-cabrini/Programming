/* This program finds the distance between two points */
#include <stdio.h>
#include <math.h>

double distance( double, double, double, double ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double x1, y1;
    double x2, y2;

    printf( "Enter the values for x1 and y1:\n" );
    scanf( "%lf %lf", &x1, &y1 );

    printf( "Enter the values for x2 and y2:\n" );
    scanf( "%lf %lf", &x2, &y2 );

    printf( "The distance between (%.2lf, %.2lf) and (%.2lf, %.2lf) ", x1, y1, x2, y2 );
    printf( "is %.2lf.\n", distance( x1, y1, x2, y2 ) );

    return 0;
} /*  end function */

/* Function to find the distance between two points */
double distance( double x1, double y1, double x2, double y2 )
{
    return fabs( sqrt( pow( ( x2 - x1), 2 ) + pow( ( y2 - y1 ), 2 ) ) ); /* Return the result */
} /* end function */
