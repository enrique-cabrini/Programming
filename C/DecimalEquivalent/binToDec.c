/* This program prints the decimal equivalent of a binary number */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int binaryNumber;
    int decimalNumber = 0;
    int reverseNumber = 0;
    int tempNumber;
    int divisor = 1;
    int remainder;
    int digit;
    int multiplier = 1;

    printf( "Enter a binary number: " ); /* Prompt user for input */
    scanf( "%d", &binaryNumber ); /* Read number from user */

    tempNumber = binaryNumber; /* Assign the value of number to tempNumber */

    /* Use a while loop to reverse the binary number */
    while ( tempNumber != 0 )
    {
        reverseNumber = reverseNumber * 10;
        reverseNumber = reverseNumber + tempNumber % 10;
        tempNumber /= 10;
    } /* end while */

    tempNumber = binaryNumber; /* Assign the value of number to tempNumber */

    /* Use a loop to find the value of divisor */
    while ( tempNumber != 0 )
    {
        divisor *= 10;
        tempNumber /= 10;
    } /* end while */

    divisor = divisor / 10; /* Divide the value of divisor by 10 */
    printf( "%d\n", divisor );

    /* Use a loop to separate the digits of the binary number and convert them to decimal */
    while ( reverseNumber != 0 )
    {
        digit = reverseNumber / divisor;
        remainder = reverseNumber % divisor;
        reverseNumber = remainder;
        divisor /= 10;

        decimalNumber += digit * multiplier;
        multiplier = multiplier * 2;
    } /* end while */

    /* Print the decimal equivalent of the binary number */
    printf( "%d to decimal is %d\n", binaryNumber, decimalNumber );

    return 0; /* Indicate the program ended successfully */
} /* end function */
