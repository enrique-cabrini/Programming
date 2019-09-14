/* This program calculates compound interest */
#include <stdio.h>
#include <math.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double amount;
    double principal = 1000.0;
    double rate = .05;
    int year;

    /* Output table column head */
    printf( "%4s%8s%21s\n", "Year", "Rate", "Amount on deposit" );

    /* For every value of year from 1 to 10 */
    for ( year = 1; year <= 10; year++ )
    {
        /* For every value of rate from 5 to 10 */
        for ( rate = 5; rate <= 10; rate++ )
        {
            /* calculate new amount for specified year */
            amount = principal * pow( 1.0 + ( double ) rate / 100, year );
            /* Print the result in a table */
            printf( "%4d%8d%21.2f\n", year, ( int ) rate, amount );
        } /* end for */
    } /* end for */

    return 0; /* Indicate the program ended successfully */
} /* end function */
