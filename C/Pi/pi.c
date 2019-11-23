<<<<<<< HEAD
/* This program finds the value of pi */
#include <stdio.h>

=======
/* This program approximates the value of pi */
#include <stdio.h>

/* Function main begins program execution */
>>>>>>> 8b6f42fc0844237602a428e9f36ec596d680e839
int main( void )
{
    /* Declare variables */
    double pi = 0;
<<<<<<< HEAD
    int sign = 1;
    int denominator = 1;
    int limit;

    printf( "\nEnter the limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    printf( "\n%s\t|%13s", "Term", "Value of Pi" ); /* Print table header */
=======
    int limit;
    int sign = 1;
    int denominator = 1;

    printf( "Enter the limit: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    printf( "\n%4s|%12s", "Term", "Value of pi" ); /* Print table header */
>>>>>>> 8b6f42fc0844237602a428e9f36ec596d680e839

    /* For every iteration of limit */
    for ( int count = 1; count <= limit; count++ )
    {
<<<<<<< HEAD
        pi += ( 4.0 / denominator ) * sign; /* Calculate the value of pi */
        denominator += 2; /* Increment denominator */
        sign *= -1;

        printf( "\n%4d\t|%13.3f", count, pi ); /* Print table body */
    } /* end for */

    printf( "\n\n" ); /* Go to the next line */

    return 0; /* Indicate program ended successfully */
} /* end function */
=======
        pi += ( 4.0 / denominator ) * sign; /* Calculate for pi */
        denominator += 2; /* Increase denominator by 2 */
        sign *= -1; /* Change the state of the sign */

        printf( "\n%4d|%12f", count, pi ); /* Print the result */
    } /* end for */

    printf( "\n\n" ); /* Go to next two lines */

    return 0; /* Indicate the program ended successfully */
} /* end function main */
>>>>>>> 8b6f42fc0844237602a428e9f36ec596d680e839
