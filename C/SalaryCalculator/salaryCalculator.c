/* This program calculates the gross salary of employees in a company */
#include <stdio.h>

/* Program execution begins from function main */
int main( void )
{
    /* Declare variables */
    int hours;
    float hourlyRate;
    float salary;
    int excessHours;

    printf( "Enter # of hours worked ( -1 to end ): " ); /* Prompt user for input */
    scanf( "%d", &hours ); /* Read hours from user */

    /* Get hourly rate and calculate salary while hours is not -1 */
    while ( hours != -1 )
    {
        printf( "Enter hourly rate of the worker ( $00.00 ): " ); /* Prompt user for input */
        scanf( "%f", &hourlyRate ); /* Read hourlyRate from user */

        /* Add time-and-a-half if hours worked is more than 40 */
        if ( hours > 40 )
        {
            /* Calculate salary */
            excessHours = hours - 40;
            salary = ( hourlyRate * hours ) + ( float ) hourlyRate / 2;
        } /* end if */
        else
            /* Calculate salary */
            salary = hourlyRate * hours;

        printf( "Salary is $%.2f\n", salary ); /* Print salary */

        printf( "\nEnter # of hours worked ( -1 to end ): " ); /* Prompt user for input */
        scanf( "%d", &hours ); /* Read hours from user */
    } /* end while */

    return 0; /* Indicate program terminated successfully */
} /* end function */
