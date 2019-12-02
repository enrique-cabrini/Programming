/* This program draws a  square with user defined sides */
#include <stdio.h>

void drawSquare( int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    int userSide; /* Declare variable */

    printf( "Enter a side for the square: " );
    scanf( "%d", &userSide );

    drawSquare( userSide ); /* Draw a square with the user's value as length */
    
    return 0;
} /* end function */

/* Function to draw square */
void drawSquare( int side )
{
    for ( int row = 1; row <= side; row++ )
    {
        for ( int column = 1; column <= side; column++ )
            printf( "*" ); /* Print asterisks */

        printf( "\n" ); /* Go to the next line */
    } /* end for */
} /* end function */
