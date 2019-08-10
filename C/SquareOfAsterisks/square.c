/* This program prints a square of asterisks with dimensions specified by the user */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int row = 1;
    int column;
    int number;

    printf( "Enter a number: " ); /* Prompt the user for input */
    scanf( "%d", &number ); /* Read number from user */

    /* Use a while loop to print each row */
    while ( row <= number )
    {
        column = 1; /* set column to 1 for each iteration of row */

        /* Use a nested while loop to print each column */
        while ( column <= number )
        {
            printf( "*" ); /* Print asterisk */
            column++; /* Increment column */
        } /* end while */

        row++; /* Increment row */
        printf( "\n" ); /* Go to a newline */
    } /* end while */

    return 0; /* Indicate program ended successfully */
} /* end function */
