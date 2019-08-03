/* This program finds the largest and smallest integers out of five */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int number1;
    int number2;
    int number3;
    int number4;
    int number5;
    int largestNumber;
    int smallestNumber;

    /* Read values from user and store them in Variables */
    printf( "Enter five numbers:\n" );
    scanf( "%d%d%d%d%d", &number1, &number2, &number3, &number4, &number5 );

    /* Find and print the largest number */
    largestNumber = number1;

    if ( number2 > largestNumber )
        largestNumber = number2;

    if ( number3 > largestNumber )
        largestNumber = number3;

    if ( number4 > largestNumber )
        largestNumber = number4;

    if ( number5 > largestNumber )
        largestNumber = number5;

    printf( "Largest is %d\n", largestNumber );

    /* Find and print the smallest number */
    smallestNumber = number1;

    if ( number2 < smallestNumber )
        smallestNumber = number2;

    if ( number3 < smallestNumber )
        smallestNumber = number3;

    if ( number4 < smallestNumber )
        smallestNumber = number4;

    if ( number5 < smallestNumber )
        smallestNumber = number5;

    printf( "Smallest is %d\n", smallestNumber );

    return 0;
} /* end function */
