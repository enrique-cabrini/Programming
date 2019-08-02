/* This program performs some arithmetic operations on two numbers. */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int number1;
    int number2;
    int sum;
    int difference;
    int product;
    int quotient;

    /* Read integers from user and store them in variables. */
    printf( "Enter two numbers:\n" );
    scanf( "%d%d", &number1, &number2 );

    /* Calculate and display the sum */
    sum = number1 + number2;
    printf( "The sum of %d and %d is %d.\n", number1, number2, sum );

    /* Calculate and display the difference */
    difference = number1 - number2;
    printf( "The difference between %d and %d is %d.\n", number1, number2, difference );

    /* Calculate and display the product */
    product = number1 * number2;
    printf( "The product of %d and %d is %d.\n", number1, number2, product );

    /* Calculate and display the quotient */
    quotient = number1 / number2;
    printf( "The quotient of %d and %d is %d.\n", number1, number2, quotient );

    return 0;
} /* end function */
