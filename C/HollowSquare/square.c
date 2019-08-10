/* This program draws a hollow square with dimension specified by the user
   using asterisks */
#include <stdio.h>

/* Program execution starts at function main */
int main( void )
{
    /* Declare variables */
    int number;
    int column;
    int whiteSpace;
    int row = 1;

    printf( "Enter a number: " ); /* Prompt user for input */
    scanf( "%d", &number ); /* Read number from user */

    /* Use a while loop to print row */
    while ( row == 1 )
    {
        column = 1; /* Set column to 1 */

        /* Use a nested while to print each column in a row */
        while ( column <= number )
        {
            printf( "*" ); /* Print asterisks */
            column++; /* Increment column */
        } /* end while */

        printf( "\n" ); /* Go to a newline */
        row++; /* Increment row */
    } /* end while */

    row = 1; /* Set row to 1 */

    /* Use a nested while to print each column in a row */
    while ( row <= number - 2 )
    {
        column = 1; /* Set column to 1 */

        printf( "*" ); /* Print one asterisk at the beginning of each row */

        /* Use a loop to print draw each column on a row */
        while ( column <= number - 2 )
        {
            printf( " " ); /* Print a space */
            column++; /* Increment column */
        } /* end while */

        printf( "*\n" ); /* Print an asterisk then go to the next line */
        row++; /* Increment row */
    }

    row = 1; /* Set row to 1 */

    /* Use a while loop to print row */
    while ( row == 1 )
    {
        column = 1; /* Set column to 1 */

        /* Use a nested while to print each column in a row */
        while ( column <= number )
        {
            printf( "*" ); /* Print asterisks */
            column++; /* Increment column */
        } /* end while */

        printf( "\n" ); /* Go to a newline */
        row++; /* Increment row */
    } /* end while */

    return 0; /* Indicate the program ended successfully */
} /* end function */
