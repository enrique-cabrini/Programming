/* This program counts letter grades and finds the average */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int sum = 0;
    double average = 0;

    /* Prompt user for input */
    printf( "Enter the letter grades.\n" );
    printf( "Enter the EOF character to end input.\n" );

    /* While grade is not the EOF */
    while ( ( grade = getchar() ) != EOF )
    {
        switch ( grade ) /* Check all possible values of grade */
        {
            case 'A': /* When grade is 'A' */
            case 'a': /* When grade is 'a' */
                ++aCount; /* Increment aCount */
                ++sum; /* Increment sum */
                break; /* Exit the loop */

            case 'B': /* When grade is 'B' */
            case 'b': /* When grade is 'b' */
                ++bCount; /* Increment bCount */
                ++sum; /* Increment sum */
                break; /* Exit the loop */

            case 'C': /* When grade is 'C' */
            case 'c': /* When grade is 'c' */
                ++cCount; /* Increment cCount */
                ++sum; /* Increment sum */
                break; /* Exit the loop */

            case 'D': /* When grade is 'D' */
            case 'd': /* When grade is 'd' */
                ++dCount; /* Increment dCount */
                ++sum; /* Increment sum */
                break; /* Exit the loop */

            case 'F': /* When grade is 'F' */
            case 'f': /* When grade is 'f' */
                ++fCount; /* Increment fCount */
                ++sum; /* Increment sum */
                break; /* Exit the loop */

            case '\n': /* When grade is a newline */
            case '\t': /* When grade is a tabspace */
            case ' ': /* When grade is a whitespace */
                break; /* Exit the loop */

            default: /* Catch all other cases */
                /* Print a message */
                printf( "Incorrect letter grade entered." );
                printf( "Enter a new grade.\n" );
                break; /* Exit the loop */
        } /* end switch */
    } /* end while */

    average = ( double ) sum / 5; /* Calculate the average */

    /* Output summary of results */
    printf( "\nTotals for each letter grade are:\n" );
    printf( "A: %d\n", aCount );
    printf( "B: %d\n", bCount );
    printf( "C: %d\n", cCount );
    printf( "D: %d\n", dCount );
    printf( "F: %d\n", fCount );
    printf( "\nThe average is %.3f.\n", average ) ;

    return 0; /* Indicate the program ended successfully */
} /* end function */
