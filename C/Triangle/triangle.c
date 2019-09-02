/* This program takes three numbers and determines if they could represent the sides
   of a triangle */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Variable declarations */
    float num1;
    float num2;
    float num3;

    printf( "Enter the three values:\n" ); /* Prompt user for input */
    scanf( "%f%f%f", &num1, &num2, &num3 ); /* Read num1, num2, and num3 from user */

    /* If num1 plus num2 is greater than num3 */
    if ( num1 + num2 > num3 )
    {
        /* If num1 plus num3 is greater than num2 */
        if ( num1 + num3 > num2 )
        {
            /* If num2 plus num3 is greater than num1 */
            if ( num2 + num3 > num1 )
            {
                /* Print a message */
                printf( "%f, %f, and %f ", num1, num2, num3 );
                printf( "are the sides of a triangle.\n" );
            } /* end if */
            else /* Otherwise */
            {
                /* Print a message */
                printf( "%f, %f, and %f ", num1, num2, num3 );
                printf( "are not the sides of a triangle.\n" );
            } /* end else */
        } /* end if */
        else /* Otherwise */
        {
            /* Print a message */
            printf( "%f, %f, and %f ", num1, num2, num3 );
            printf( "are not the sides of a triangle.\n" );
        } /* end else */
    } /* end if */
    else /* Otherwise */
    {
        /* Print a message */
        printf( "%f, %f, and %f ", num1, num2, num3 );
        printf( "are not the sides of a triangle.\n" );
    } /* end else */

    return 0; /* Indicate the program ended successfully */
} /* end function */
