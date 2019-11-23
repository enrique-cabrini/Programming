/* This program estimates Napier's number */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double napiersNumber = 1;
    int limit;
    int x;
    int factorial = 1;
    int count = 1;

    printf( "Enter x: " ); /* Prompt user for input */
    scanf( "%d", &x ); /* Read x from user */

    printf( "Enter limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    double temp_num = x; /* Temporary number for calculations */

    /* Use a for loop to estimate e^x */
    for ( int counter = 1; counter < limit; counter++ )
    {
        factorial *= counter; /* Find the factorial */
        napiersNumber += ( double ) temp_num / factorial; /* Calculate for Napier's number */

        printf( "X:%f\n", temp_num );

        /* While count is less than or equals counter */
        while ( count <= counter )
        {
            temp_num *= x; /* Multiply the current value of temp_num by temp_num */
            count++; /* Increment count */
        }
    } /* end function */

    printf( "E exponent %d to term %d is %f.\n", x, limit, napiersNumber ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function main */
