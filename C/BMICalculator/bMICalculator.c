/* This program calculates the body mass index of the user */
#include <stdio.h>

int main( void )
{
    /* Variable declarations */
    int weightInPounds;
    int heightInInches;
    int bodyMassIndex;

    /* Ask user for mass and store it in variable massInPounds */
    printf( "Enter your weight in pounds: " ); /* Prompt user to enter their mass */
    scanf( "%d", &weightInPounds );

    /* Ask user for height and store it in variable heightInInches */
    printf( "Enter your height in inches: " ); /* Prompt user to enter their height */
    scanf( "%d", &heightInInches );

    /* Calculate and display user's body mass index */
    bodyMassIndex = ( weightInPounds * 703 ) / ( heightInInches * heightInInches );
    printf( "Your body mass index is %d\n", bodyMassIndex );

    /* Display BMI values and their corresponding BMI */
    printf( "\nBMI VALUES\n" );
    printf( "Underweight: less than 18.5\n" );
    printf( "Normal:      between 18.5 and 24.9\n" );
    printf( "Overweight:  between 25 and 29.9\n" );
    printf( "Obese:       30 or greater\n" );

    return 0;
} /* end function */
