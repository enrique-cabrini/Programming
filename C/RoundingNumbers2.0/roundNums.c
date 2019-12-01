/* This program rounds numbers */
#include <stdio.h>
#include <math.h>

/* Function prototypes */
int roundToInteger( double );
double roundToTenths( double );
double roundToHundreths( double );
double roundToThousandths( double );

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    double decimalNum;
    int integer;
    double decimalTenth;
    double decimalHundredth;
    double decimalThousandth;

    printf( "Enter a decimal number: " );
    scanf( "%lf", &decimalNum );

    /* Get unknown number of values from user */
    while ( decimalNum != 1 )
    {
        printf( "Original Value     : %lf\n", decimalNum );
        printf( "Nearest integer    : %d\n", roundToInteger( decimalNum ) );
        printf( "Nearest tenth      : %.3lf\n", roundToTenths( decimalNum ) );
        printf( "Nearest hundredth  : %.3lf\n", roundToHundreths( decimalNum ) );
        printf( "Nearest thousandth : %.3lf\n", roundToThousandths( decimalNum ) );

        printf( "\nEnter a decimal number: " );
        scanf( "%lf", &decimalNum );
    } /* end while */

    return 0;
} /* end function */

/* Function to round to the nearest integer */
int roundToInteger( double number )
{
    int integer = floor( number + 0.5 ); /* Round number to nearest integer */

    return integer; /* Return rounded number to caller */
} /* end function */

/* Function to round to nearest tenth */
double roundToTenths( double number )
{
    double tenth; /* Declare variable */

    tenth =  ( double ) floor( number * 10 + 0.5 ) / 10.0; /* Round to nearest tenth */
    return tenth; /* Return rounded number to caller */
} /* end function */

/* Function to round to nearest hundredth */
double roundToHundreths( double number )
{
    double hundredth; /* Declare variable */

    hundredth = ( double ) floor( number * 100 + 0.5 ) / 100.0; /* Round to nearest hundredth */
    return hundredth; /* Return rounded number to caller */
} /* end function */

/* Function to round to nearest thousandth */
double roundToThousandths( double number )
{
    double thousandth; /* Declare variable */

    thousandth = ( double ) floor( number * 1000 + 0.5 ) / 1000.0; /* Round to nearest thousandth */
    return thousandth; /* Return rounded number to caller */
} /* end function */
