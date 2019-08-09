/* This program finds the two largest numbers out of 10 numbers */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    int counter = 1; /* Initialize counter variable */
    int number; /* Declare a variable */
    int largest = 0; /* Define a variable */
    int secondLargest = 0; /* Define a variable */

    /* Use a loop to get 10 numbers and find the largest two */
    while ( counter <= 10 )
    {
        printf( "Enter a number: " ); /* Prompt user for input */
        scanf( "%d", &number ); /* Read number from user */

        counter++; /* Increment counter */

        /* Check if number is larger than largest */
        if ( number > largest )
        {
            secondLargest = largest; /* Assign the old value of largest to secondLargest */
            largest = number; /* Assign the current number to largest */
        } /* end if */
        else if ( number > secondLargest ) /* If number if greater than secondLargest */
            secondLargest = number; /* Assign the current number to secondLargest */
    } /* end while */

    printf( "The two largest numbers are %d and %d\n", largest, secondLargest ); /* Print two largest */

    return 0; /* Indicate the program terminated successfully */
} /* end function */
