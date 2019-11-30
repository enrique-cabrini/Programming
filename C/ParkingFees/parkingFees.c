/* This program calculates the parking charges of a parking garage */
#include <stdio.h>

double calculateCharges( double ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double hours1;
    double hours2;
    double hours3;
    int car;

    /* Define variables */
    double totalHours = 0;
    double totalCharges = 0;

    printf( "Enter the hours parked for each car: " );
    scanf( "%lf%lf%lf", &hours1, &hours2, &hours3 );

    totalHours += hours1 + hours2 + hours3;
    totalCharges += calculateCharges( hours1 ) + calculateCharges( hours2 )
                 + calculateCharges( hours3 );

    /* Print the result */
    printf( "Cars\tHours\tCharge\n" );
    printf( "1\t%.1lf\t%.2lf\n", hours1, calculateCharges( hours1 ) );
    printf( "2\t%.1lf\t%.2lf\n", hours2, calculateCharges( hours2 ) );
    printf( "3\t%.1lf\t%.2lf\n", hours3, calculateCharges( hours3 ) );
    printf( "TOTAL\t%.1lf\t%.2lf\n", totalHours, totalCharges );

    return 0;
} /* end function */

/* Function to calculate parking charges */
double calculateCharges( double hours )
{
    double charges = 2; /* Define a variable */

    /* Increment charges for every additional hour */
    for ( int counter = 3; counter < hours; counter++ )
    {
        charges += 0.5;

        if ( charges > 10 )
        {
            charges = 10; /* Charges cannot exceed 10 */
            break; /* Exit the loop */
        } /* end if */
    } /* end for */

    return charges; /* Return value of charges to caller */
} /* end function */
