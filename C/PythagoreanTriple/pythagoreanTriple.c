/* This program determines if a set of three numbers is a pythagorean triple */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* For every value of hypotenuse */
    for ( int hypotenuse = 1; hypotenuse <= 500; hypotenuse++ )
    {
        /* For every value of sideOne */
        for ( int sideOne = 1; sideOne <= 500; sideOne++ )
        {
            /* For every value of sideTwo */
            for ( int sideTwo = 1; sideTwo <= 500; sideTwo++ )
            {
                /* If sideOne squared plus sideTwo squared equals hypotenuse squared */
                if ( ( sideOne * sideOne ) + ( sideTwo * sideTwo ) == ( hypotenuse * hypotenuse ) )
                {
                    /* Print the result */
                    printf( "%d, %d, and %d are a Pythagorean triple.\n", sideOne, sideTwo, hypotenuse );
                } /* end if */
            } /* end for */
        } /* end for */
    } /* end for */

    return 0; /* Indicate the program ended successfully */
} /* end function main */
