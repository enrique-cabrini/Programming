/* This program calculates the mileage of cars */
#include <stdio.h>

/* Program execution begins at function main */
int main( void )
{
    /* Declare variables */
    int milesDriven;
    float gallonsUsed;
    float milesPerGallon;
    float totalMilesPerGallon;

    /* Initialize variables */
    float totalMilesDriven = 0;
    float totalGallonsUsed = 0;

    printf( "Enter the gallons used ( -1 to end ): " ); /* Prompt user for input */
    scanf( "%f", &gallonsUsed ); /* Read gallonsUsed from user */

    /* Get milesDriven and calculate miles per gallon while gallonsUsed is not -1 */
    while ( gallonsUsed != -1 )
    {
        printf( "Enter the miles driven: " ); /* Prompt user for input */
        scanf( "%d", &milesDriven ); /* Read milesDriven from user */

        milesPerGallon = ( float ) milesDriven / gallonsUsed;
        printf( "The miles / gallon for this tank was %f\n", milesPerGallon ); /* Print miles per gallon */

        totalGallonsUsed += gallonsUsed; /* Increment totalGallonsUsed by gallonsUsed */
        totalMilesDriven += milesDriven; /* Increment totalMilesDriven by milesDriven */

        printf( "\nEnter the gallons used ( -1 to end ): " ); /* Prompt user for input */
        scanf( "%f", &gallonsUsed ); /* Read gallonsUsed from user */
    } /* end while */

    /* calculate and print totalMilesPerGallon */
    if ( totalGallonsUsed > 0 )
    {
        totalMilesPerGallon = ( float ) totalMilesDriven / totalGallonsUsed;
        printf( "\nThe overall average miles/gallon was %f\n", totalMilesPerGallon );
    } /* end if */
    else
        printf( "\nThe was no input\n" );

    return 0; /* indicate the program terminated successfully */
} /* end function */
