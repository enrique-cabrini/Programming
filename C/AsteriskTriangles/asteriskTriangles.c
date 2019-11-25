/* This program draws four different triangles with asterisks */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int row;
    int column;
    int space;
    int counter;

    /* Loop 10 times */
    for ( row = 1; row <= 10; row++ )
    {
        /* Loop until column equals row */
        for ( column = 1; column <= row; column++ )
            printf( "*" ); /* Print asterisks */

        printf( "\n" ); /* Move to the next line */
    } /* end for */

    printf( "\n" ); /* Move to the next line */

    /* Loop 10 times */
    for ( row = 1; row <= 10; row++ )
    {
        /* Loop until column equals row */
        for ( column = 10; column >= row; column-- )
            printf( "*" ); /* Print asterisks */

        printf( "\n" ); /* Move to the next line */
    } /* end for */

    printf( "\n" ); /* Move to the next line */

    /* Loop 10 times */
    for ( row = 1; row <= 10; row++ )
    {
        space = row - 1; /* Define space */

        /* Loop until counter equals space */
        for ( counter = 1; counter <= space; counter++ )
            printf( " " ); /* Print space before asterisks */

        /* Loop until column equals row */
        for ( column = 10; column >= row; column-- )
            printf( "*" ); /* Print asterisks */

        printf( "\n" ); /* Move to the next line */
    } /* end for */

    printf( "\n" ); /* Move to the next line */

    /* Loop 10 times */
    for ( row = 1; row <= 10; row++ )
    {
        space = 10 - row; /* Define space */

        /* Loop until counter equals space */
        for ( counter = 1; counter <= space; counter++ )
            printf( " " ); /* Print space before asterisks */

        /* Loop until column equals row */
        for ( column = 1; column <= row; column++ )
            printf( "*" ); /* Print asterisks */

        printf( "\n" ); /* Move to the next line */
    } /* end for */

    printf( "\n" ); /* Move to the next line */

    return 0; /* Indicate program ended successfully */
} /* end funtion */
