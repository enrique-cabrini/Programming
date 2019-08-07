/* This program calculates the commission on sales */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    float sales;
    float salary;

    printf( "Enter sales in dollars ( -1 to end ): " ); /* Prompt user for input */
    scanf( "%f", &sales ); /* Read sales from user */

    /* Calculate salary while sales is not -1 */
    while ( sales != -1 )
    {
        /* Calculate and print salary */
        salary = (  ( float ) 9 / 100 ) * sales + 200;
        printf( "Salary is: $%.2f\n", salary );

        printf( "Enter sales in dollars ( -1 to end ): " ); /* Prompt user for input */
        scanf( "%f", &sales ); /* Read sales from user */
    }

    return 0; /* Indicate the program terminated successfully */
} /* end function */
