/* This program calculates sales of an online retailer */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int product;
    int quantity;
    int limit;
    double totalRetail;

    printf( "Enter number of products sold: " ); /* Prompt user for input */
    scanf( "%d", &limit ); /* Read limit from user */

    /* For every value of counter less than or equal to limit */
    for ( int counter = 1; counter <= limit; counter++ )
    {
        printf( "Enter product number: " ); /* Prompt user for input */
        scanf( "%d", &product ); /* Read product from user */

        printf( "Enter quantity sold: " ); /* Prompt user for input */
        scanf( "%d", &quantity ); /* Read quantity from user */

        /* Check for all possible values of product */
        switch ( product )
        {
            case 1: /* When product is 1 */
                totalRetail += 2.98 * quantity; /* Add 2.98 times quantity to totalRetail */
                break; /* Exit the loop */

            case 2: /* When product is 2 */
                totalRetail += 4.50 * quantity; /* Add 4.50 times quantity to totalRetail */
                break; /* Exit the loop */

            case 3: /* When product is 3 */
                totalRetail += 9.98 * quantity; /* Add 9.98 times quantity to totalRetail */
                break; /* Exit the loop */

            case 4: /* When product is 4 */
                totalRetail += 4.49 * quantity; /* Add 4.49 times quantity to totalRetail */
                break; /* Exit the loop */

            case 5: /* When product is 5 */
                totalRetail += 6.87 * quantity; /* Add 6.87 times quantity to totalRetail */
                break; /* Exit the loop */

            case '\t': /* When product is a tab space */
            case '\n': /* When product is a newline */
            case ' ': /* When product is a blank space */
                break;

            default: /* When product is any other value */
                printf( "Invalid input!\n" ); /* Print an error message */
                break; /* Exit the loop */
        } /* end switch */
    } /* end for */

    printf( "The total retail value was $%.2f.\n", totalRetail ); /* Print the result */

    return 0; /* Indicate the program ended successfully */
} /* end function */
