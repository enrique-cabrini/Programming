/* This program finds the largest number out of 10 number inputted by the user */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 1; /* Define a counter variable */
    int number = 1; /* Declare a variable */
    int largestNumber = 0; /* Define a variable */

    /* Use a while loop to enter numbers and find the largest number */
    while ( counter <= 10 )
    {
        printf( "Enter a number: " ); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        /* Check if number is greater than largestNumber */
        if ( number > largestNumber )
            largestNumber = number; /* assign number to largestNumber */

        counter++; /* Increment counter */
    }

    printf( "The largest number is %d\n", largestNumber ); /* Print largest number */

    return 0; /* Indicate the program terminated successfully */
} /* end function */
