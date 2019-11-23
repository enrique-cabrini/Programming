/* This program finds the square root of squares */
#include <stdio.h>

int squareRoot( int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    int userInput;

    printf( "Enter a whole number: " ); /* Prompt user for input */
    scanf( "%d", &userInput ); /* Read userInput from user */

    printf( "The square root of %d is %d.\n", userInput, squareRoot( userInput ) ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function */

/* Function to find the square root of a number */
int squareRoot( int number )
{
    /* For every number between 1 and number */
    for ( int counter = 1; counter <= number; counter++ )
    {
        /* If counter times counter equals number */
        if ( counter * counter == number )
            return counter; /* Return counter to the caller */
    } /* end for */
} /* end function */
