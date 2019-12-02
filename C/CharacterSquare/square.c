/* This program draws a square with sides and character with which the square is drawn
   specified by the user */
#include <stdio.h>

void drawSquare( int, char ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    char userCharacter;
    int userSide;

    printf( "Enter side and and fill character:\n" );
    scanf( "%d %c", &userSide, &userCharacter );

    drawSquare( userSide, userCharacter ); /* Draw a square */

    return 0;
} /* end function */

/* Function to draw squares */
void drawSquare( int side, char fillCharacter )
{
    for ( int row = 1; row <= side; row++ )
    {
        for ( int column = 1; column <= side; column++ )
            printf( "%c", fillCharacter ); /* Print characters */

        printf( "\n" ); /* Go to the next line */
    } /* end for */
} /* end function */
