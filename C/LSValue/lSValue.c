/* Program to perform some arithmetic operations on three numbers, find the average and
   the largest and smallest value. */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int number1;
    int number2;
    int number3;
    int sum;
    int average;
    int product;
    int largest;
    int smallest;

    /* Read values from user and store them in variables. */
    printf( "Input three different integers: " ); /* Prompt user to input values */
    scanf( "%d%d%d", &number1, &number2, &number3 );

    /* Calculate and display sum */
    sum = number1 + number2 + number3;
    printf( "Sum is %d\n", sum );

    /* Calculate and display average */
    average = ( number1 + number2 + number3 ) / 3;
    printf( "Average is %d\n", average );

    /* Calculate and display product */
    product = number1 * number2 * number3;
    printf( "Product is %d\n", product );

    /* Find and display smallest number */
    smallest = number1;

    if ( number2 < smallest )
        smallest = number2;

    if ( number3 < smallest )
        smallest = number3;

    printf( "Smallest is %d\n", smallest );

    /* Find and display largest number */
    largest = number1;

    if ( number2 > largest )
        largest = number2;

    if ( number3 > largest )
        largest = number3;

    printf( "Largest is %d\n", largest );
}
