/* This program demonstrates the difference between postdecrementing vs predecrementing */
#include <stdio.h>

/* Function execution begins at function main */
int main( void )
{
    /* Declare variables */
    int number1;
    int number2;

    /* Initialize variables */
    number1 = 5;
    number2 = 5;

    /* Print initial values of number */
    printf( "Initial value of number 1: %d\n", number1 );
    printf( "Initial value of number 2: %d\n", number2 );

    /* Predecrement number1 in a statement and print the value */
    printf( "Value of number 1 during statement: %d\n", --number1 );
    printf( "Final value of number 1: %d\n", number1 );

    /* Postdecrement number2 in a statement and print the value */
    printf( "Value of number 2 during statement: %d\n", number2-- );
    printf( "Final value of number 2: %d\n", number2 );

    return 0; /* Indicate the program terminated successfully */
} /* end function */
