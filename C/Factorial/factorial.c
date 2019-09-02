/* This program finds and prints the factorial of a number */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int number;
    int factorial;
    int counter;

    printf( "Enter a number: " ); /* Prompt user for input */
    scanf( "%d", &number ); /* Read number from user */

    factorial = number; /* Initialize factorial to number */
    counter = number - 1; /* Initialize counter to number minus one */

    /* If number is greater than zero */
    if ( number > 0 )
    {
        /* While counter is greater than or equal to 1 */
        while ( counter >= 1 )
        {
            /* Multiply the current value of factorial by number - counter */
            factorial *= number - counter;
            counter -= 1; /* Decrement counter */
        } /* end while */
    } /* end if */
    /* Otherwise, if number equals zero */
    else if ( number == 0 )
        factorial = 1; /* Set factorial to 1 */

    /* If number if greater than or equal to zero */
    if ( number >= 0 )
        printf( "The factorial of %d is %d.\n", number, factorial ); /* Print the factorial */
    else
        printf( "Invalid input.\n" ); /* Print an error message */

    return 0; /* Indicate the program ended successfully */
} /* end function */
