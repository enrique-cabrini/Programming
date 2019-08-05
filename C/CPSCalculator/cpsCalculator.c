/* This program calculates the daily driving cost of the user */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int totalMilesDriven;
    int costPerGallon;
    int averageMilesPerGallon;
    int parkingFees;
    int tollsPerDay;
    int dailyDrivingCost;

    /* Ask user for miles driven to work and back and store it in variable
       totalMilesDriven */
    printf( "Enter the number of miles you drive to work and back: " );
    scanf( "%d", &totalMilesDriven );

    /* Ask user for cost per gallon of gasoline and store it in costPerGallon */
    printf( "Enter the cost per gallon of gasoline: " );
    scanf( "%d", &costPerGallon );

    /* Ask user for average miles per gallon ans store it in averageMilesPerGallon */
    printf( "Enter the average miles driven per gallon of gasoline: " );
    scanf( "%d", &averageMilesPerGallon );

    /* Ask user for parking fees per day and store it in parkingFees */
    printf( "Enter the parking fees paid per day: " );
    scanf( "%d", &parkingFees );

    /* Ask user for tolls paid per day and store it in tollsPerDay */
    printf( "Enter tolls paid per day: " );
    scanf( "%d", &tollsPerDay );

    /* Calculate and print total expenditure per week */
    dailyDrivingCost = ( ( averageMilesPerGallon / totalMilesDriven ) * costPerGallon * 12
                       / 7 ) + parkingFees + tollsPerDay;
    printf( "Your daily driving cost is $%d\n", dailyDrivingCost );

    return 0;
} /* end function */
