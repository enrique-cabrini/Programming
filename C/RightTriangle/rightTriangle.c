/* This program determines if three numbers could represent the sides of a right triangle */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    float side1;
    float side2;
    float hypotenuse;

    printf( "Enter a value for the hypotenuse: " ); /* Prompt user for input */
    scanf( "%f", &hypotenuse ); /* Read hypotenuse from user */

    printf( "Enter values for other two sides:\n" ); /* Prompt user for input */
    scanf( "%f%f", &side1, &side2 ); /* Read side1, and side2 from user */

    /* If side1 squared plus side2 squared equals hypotenuse squared */
    if ( side1 * side1 + side2 * side2 == hypotenuse * hypotenuse )
    {
        /* Print a message */
        printf( "%.2f, %.2f, and %.2f ", side1, side2, hypotenuse );
        printf( "are the sides of a right triangle.\n" );
    } /* end if */
    else /* Otherwise */
    {
        /* Print a message */
        printf( "%.2f, %.2f, and %.2f ", side1, side2, hypotenuse );
        printf( "are not the sides of a right triangle.\n" );
    } /* end else */

    return 0; /* Indicate the program ended successfully */
} /* end function */
