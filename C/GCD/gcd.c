/* This program finds the greatest common divisor of two numbers */
#include <stdio.h>

/* Function prototypes */
int gcd( int, int );
void order( int, int );

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int num1;
    int num2;

    printf( "Enter two numbers: " );
    scanf( "%d %d", &num1, &num2 );

    /* Print the result */
    printf( "The greatest common divisor of %d and %d is %d\n", num1, num2, gcd( num1, num2 ) );

    return 0;
} /* end function */

/* Function to find the greatest common divisor */
int gcd( int number1, int number2 )
{
    order( number1, number2 );

    if ( number2 != 0 )
        return gcd( number2, number1 % number2 );
    else
        return number1;
} /* end function */

/* Function to ensure the correct order of values  */
void order( int a, int b )
{
    int tempNum = a; /* Define a variable */

    if ( b > a )
    {
        a = b;
        b = tempNum;
    } /* end if */
} /* end function */
