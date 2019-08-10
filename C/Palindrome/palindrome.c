/* This program determines if a number is a palindrome or not */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int number;
    int secondNumber = 0;
    int remainder;
    int tempNumber;

    printf( "Enter a five digit number: " ); /* Prompt user for input */
    scanf( "%d", &number ); /* Read number from user */

    tempNumber = number; /* Set tempNumber to the value of number */

    /* Separate the digits and append them to secondNumber in a loop */
    while ( tempNumber != 0 )
    {
        remainder = tempNumber % 10;
        secondNumber = secondNumber * 10 + remainder;
        tempNumber /= 10;
    } /* end while */

    /* Check if secondNumber is equal to number */
    if ( secondNumber == number )
        printf( "%d is a palindrome\n", number ); /* Print a message */
    else /* Otherwise, print a different message */
        printf( "%d is not a palindrome\n", number );

    return 0; /* Indicate the program terminated successfully */
} /* end function */
