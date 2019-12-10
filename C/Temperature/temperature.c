/* This program converts celsius to fahrenheit and vice versa */
#include <stdio.h>

/* Function prototypes */
int celsius( int );
int fahrenheit( int );

/* Function main begins program execution */
int main( void )
{
    int counter; /* Declare a variable */

    printf( "Celsius  |  Fahrenheit" ); /* Print table header */

    /* Loop 101 times */
    for ( counter = 0; counter <= 100; counter++ )
        printf( "\n%7d  |%12d", counter, fahrenheit( counter ) ); /* Print table */

    printf( "\n\nFahrenheit  |  Celsius" ); /* Print table header */

    /* Loop 181 times */
    for ( counter = 32; counter <= 212; counter++ )
        printf( "\n%10d  |%9d", counter, celsius( counter ) ); /* Print tables */

    printf( "\n" );

    return 0;
} /* end function */

/* Function to return celsius equivalent of a fahrenheit temperature */
int celsius( int temperature )
{
    return ( temperature - 32 ) * 5 / 9; /* Return celsius equivalent of fahrenheit */
} /* end function */

/* Function to return fahrenheit equivalent of a celsius temperature */
int fahrenheit( int temperature )
{
    return ( temperature * 9 / 5 ) + 32; /* Return fahrenheit equivalent of celsius */
} /* end function */
