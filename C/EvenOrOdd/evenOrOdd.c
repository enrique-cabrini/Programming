/* This program determines if a number is even or odd */
#include <stdio.h>

int even( int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    int userNum; /* Declare variable */

    printf( "Enter a number: " );
    scanf( "%d", &userNum );

    /* Get unknown number of values from user */
    while ( userNum != 0 )
    {
        /* If userNum is even */
        if ( even( userNum ) == 1 )
            printf( "%d is even\n", userNum ); /* Print a message */
        else
            printf( "%d is odd\n", userNum ); /* Print a message */

        printf( "Enter a number: " );
        scanf( "%d", &userNum );
    }

    return 0;
} /* end function */

/* Function to determine if a number is odd or even */
int even( int number )
{
    /* If number is even */
    if ( number % 2 == 0 )
        return 1; /* Print a message */
    else
        return 0; /* Print a message */
} /* end function */
