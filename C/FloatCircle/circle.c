/* This program takes a radius and prints the diameter, circumference, and area of the circle */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    float radius;
    float diameter;
    float circumference;
    float area;
    float pi;

    pi = 3.14159; /* Initialize pi */

    printf( "Enter a value for the radius: " ); /* Prompt user for input */
    scanf( "%f", &radius ); /* Read radius from user */

    /* Calculate and print the diameter */
    diameter = radius * 2;
    printf( "The diameter is %.2f\n", diameter );

    /* Calculate and print the circumference */
    circumference = 2 * pi * radius;
    printf( "The circumference is %.2f\n", circumference );

    /* Calculate and print the area */
    area = pi * radius * radius;
    printf( "The area is %.2f\n", area );

    return 0; /* Indicate the program ended successfully */
} /* end function */
