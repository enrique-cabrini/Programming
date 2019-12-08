/* This program prints takes the time and prints the number of seconds that have passed
   since the clock last struck 12 */
#include <stdio.h>
#include <stdlib.h>

int getTimeSinceTwelve( int, int, int ); /* Function prototype */

/* Function main begins program execution */
int main( void )
{
    /* Declare variables */
    int hour1;
    int hour2;
    int minute1;
    int minute2;
    int second1;
    int second2;
    int time1;
    int time2;

    printf( "Enter time for time1 (hh::mm::ss):\n" );
    scanf( "%d %d %d", &hour1, &minute1, &second1 );

    printf( "Enter time for time2 (hh::mm::ss):\n" );
    scanf( "%d %d %d", &hour2, &minute2, &second2 );

    time1 = getTimeSinceTwelve( hour1, minute1, second1 ); /* Define time1 */
    time2 = getTimeSinceTwelve( hour2, minute2, second2 ); /* Define time2 */

    /* Print the result */
    printf( "The number of seconds between each time is " );
    printf( "%d\n", abs( time1 - time2 ) );

    return 0;
} /* end function */

/* Function to get the number of seconds since the clock last struck 12 */
int getTimeSinceTwelve( int hours, int minutes, int seconds )
{
    return ( ( hours % 12 * 3600 ) + minutes * 60 + seconds ); /* return the result */
} /* end function */
