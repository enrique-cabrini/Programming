/* This program takes a number and determines how many digits are in the number are 7 */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int number;
    int divisor = 1;
    int remainder;
    int digit;
    int tempNumber;
    int sevenCount = 0;

    printf( "Enter a number: " ); /* Prompt user for input */
    scanf( "%d", &number ); /* Read number from user */

    tempNumber = number; /* Assign the value of number to tempNumber */

    /* Use a loop to find the value of divisor */
    while ( tempNumber != 0 )
    {
        divisor *= 10;
        tempNumber /= 10;
    } /* end while */

    divisor /= 10; /* Divide divisor by 10 to get actual value */

    tempNumber = number; /* Assign the value of number to tempNumber */

    /* Use a loop to separate the digits of the number */
    while ( tempNumber != 0 )
    {
        digit = tempNumber / divisor;
        remainder = tempNumber % divisor;
        tempNumber = remainder;
        divisor /= 10;

        /* Increment sevenCount if a digit is 7 */
        if ( digit == 7 )
            sevenCount++;
    } /* end while */

    /* Print the number of sevens */
    printf( "There %s ", sevenCount == 1 ? "is" : "are" );
    printf( "%d seven%s", sevenCount, sevenCount == 1 ? " " : "s " );
    printf( "in %d\n", number );

    return 0; /* Indicate the program ended successfully */
} /* end function */
