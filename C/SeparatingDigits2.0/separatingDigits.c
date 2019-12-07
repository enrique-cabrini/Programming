/* This program separates the digits of a number between 1 and 32767 */
#include <stdio.h>

/* Function prototypes */
int getNumberLength( int );
void separateDigits( int );
int getDivisor( int );

/* Function main begins program execution */
int main( void )
{
    int userNum; /* Declare a variable */

    printf( "Enter a number between 1 and 32767: " );
    scanf( "%d", &userNum );

    /* While userNum is greater than 32767 */
    while ( userNum > 32767 )
    {
        printf( "Number too large.\n" ); /* Print a message */

        printf( "Enter a number between 1 and 32767: " );
        scanf( "%d", &userNum );
    } /* end while */

    separateDigits( userNum ); /* Separate the digits of userNum */
    printf( "\n" ); /* Go to the next line */

    return 0;
} /* end function */

/* Function to separate digits of an integer */
void separateDigits( int number )
{
    /* Variable declarations */
    int remainder;
    int quotient;

    /* Variable definitions */
    int divisor = getDivisor( number );
    int tempNum = number;

    /* For every digit in number */
    for ( int counter = 1; counter <= getNumberLength( number ); counter++ )
    {
        quotient = tempNum / divisor;
        remainder = tempNum % divisor;
        tempNum = remainder;
        divisor /= 10;

        printf( "%d  ", quotient );
    } /* end for */
} /* end function */

/* Function to get the divisor */
int getDivisor( int number )
{
    int divisor; /* Declare a variable */

    /* Create an infinte loop */
    for ( int counter = 1; ; counter *= 10 )
    {
        divisor = number / counter;

        /* If divisor is less than 1 */
        if ( divisor < 1 )
        {
            divisor = counter / 10;
            break; /* Exit the loop */
        } /* end if */
    } /* end for */

    return divisor; /* Return divisor to caller */
} /* end function */

/* Function to get the length of a number */
int getNumberLength( int number )
{
    int length; /* Declare a variable */
    int divisor = 1; /* Define a variable */

    /* Create an infinte loop */
    for ( int counter = 0; ; counter++ )
    {
        length = number / divisor;
        divisor *= 10;

        /* If length is less than 1 */
        if ( length < 1 )
        {
            length = counter;
            break; /* Exit the loop */
        } /* end if */
    } /* end for */

    return length; /* Return length to caller */
} /* end function */
