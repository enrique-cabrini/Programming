/* This program computes the weekly pay for each type of employee in a company */
#include <stdio.h>

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int paycode;
    int item;
    int numberProduced;
    int extraHours;
    double grossWeeklySales;
    double managerSalary = 0;
    double hourlyWorkerSalary = 0;
    double commissionWorkerSalary = 0;
    double pieceWorkerSalary = 0;

    printf( "Enter paycode: " ); /* Prompt user for input */
    scanf( "%d", &paycode ); /* Read paycode from user */

    /* While paycode is not the end of line value */
    while ( paycode != EOF )
    {
        /* Check all possible values of paycode */
        switch ( paycode )
        {
            case 1: /* When paycode is 1 */
                managerSalary += 2500; /* Manager's salary */
                break; /* Exit the loop */

            case 2: /* When paycode is 2 */
                printf( "Extra hours? ( 1 = Yes, 0 = No): " ); /* Prompt user for input */
                scanf( "%d", &extraHours ); /* Read extraHours from user */

                hourlyWorkerSalary += 600 + ( 1.5 * 600 ) * extraHours;
                break; /* Exit the loop */

            case 3: /* When paycode is 3 */
                printf( "Gross weekly sales: " ); /* Prompt user for input */
                scanf( "%f", &grossWeeklySales ); /* Read grossWeeklySales from user */

                /* Commission worker salary */
                commissionWorkerSalary += 250 + ( ( 5.7 / 100 ) * grossWeeklySales );
                break; /* Exit the loop */

            case 4: /* When paycode is 4 */
                printf( "Item produced: " ); /* Prompt user for input */
                scanf( "%d", &item ); /* Read item from user */

                printf( "Number produced: " ); /* Prompt user for input */
                scanf( "%d", &numberProduced ); /* Read numberProduced from user */

                /* If the item produced has code 1 */
                if ( item == 1 )
                    pieceWorkerSalary += 250 * numberProduced; /* Piece worker salary */
                /* If item produced has code 2 */
                else if ( item == 2 )
                    pieceWorkerSalary += 80 * numberProduced; /* Piece worker salary */
                /* If item produced has code 3 */
                else if ( item == 3 )
                    pieceWorkerSalary += 50 * numberProduced; /* Piece worker salary */
                /* If item produced has code 4 */
                else if ( item == 4 )
                    pieceWorkerSalary += 35 * numberProduced; /* Piece worker salary */

                break; /* Exit the loop */

            case '\n': /* When paycode is a newline, */
            case '\t': /* a tabspace, or */
            case ' ': /* a space */
                break; /* Exit the loop */
        } /* end switch */

        printf( "Enter paycode: " ); /* Prompt user for input */
        scanf( "%d", &paycode ); /* Read paycode from user */
    } /* end while */

    /* Print the result */
    printf( "\nThe total weekly salary for each type of employee is: " );
    printf( "\nManager           : $%.2f", managerSalary );
    printf( "\nHourly worker     : $%.2f", hourlyWorkerSalary );
    printf( "\nCommission worker : $%.2f", commissionWorkerSalary );
    printf( "\nPiece worker      : $%.2f\n", pieceWorkerSalary );

    return 0; /* Indicate the program ended successfully */
} /* end function */
