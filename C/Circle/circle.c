/* This program takes the radius of a circle and prints the diameter, area,
   and circumference of the circle. */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int radius;

    /* Read value from user and store in variable radius */
    printf( "Enter radius: " ); /* Prompt user to enter value */
    scanf( "%d", &radius );

    /* Calcute and print diameter */
    printf( "Diameter is %f\n", radius * 2.0 );

    /* Calcute and print circumference */
    printf( "Circumference is %f\n", 2 * 3.14159 * radius );

    /* Calcute and print area */
    printf( "Area is %f\n", 3.14159 * radius * radius );

    return 0;
} /* end function */
