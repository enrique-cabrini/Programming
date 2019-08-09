/* Analysis of examination results */
#include <stdio.h>

/* function main begins program execution */
int main( void )
{
    /* initialize variables in definitions */
    int passes = 0; /* number of passes */
    int failures = 0; /* number of failures */
    int student = 1; /* student counter */
    int result; /* one exam result */
    int validator = 1;

    /* Process 10 students using counter-controlled loop */
    while ( student <= 10 )
    {
        if ( validator != 2 )
        {
            printf( "Enter result ( 1 = pass, 2 = fail ): " ); /* Prompt user for input */
            scanf( "%d", &result ); /* Read result from user */

            /* if result is 1, increment passes */
            if ( result == 1 )
            {
                passes++;
                validator = 1;
            } /* end if */
            else if ( result == 2 ) /* otherwise, increment failures */
            {
                failures++;
                validator = 1;
            } /* end else if */

            while ( validator == 2 )
            {
                printf( "Incorrect result. Enter 1 for pass, or 2 for fail: " );
                scanf( "%d", &result );

                /* if result is 1, increment passes */
                if ( result == 1 )
                {
                    passes++;
                    validator = 1;
                } /* end if */
                else if ( result == 2 ) /* otherwise, increment failures */
                {
                    failures++;
                    validator = 1;
                } /* end else if */
            } /* end while */
        } /* end while */

        student++; /* Increment student */
    } /* end while */

    /* termination phase; display number of passes and failures */
    printf( "Passed %d\n", passes );
    printf( "Failures %d\n", failures );

    /* If more than eight students passed, print "Bonus to instructor!" */
    if ( passes > 8 )
        printf( "Bonus to instructor!\n" );

    return 0; /* Indicate the program terminated successfully */
} /* end function */
