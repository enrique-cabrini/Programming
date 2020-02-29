#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

int rollDie( void );
int mostFrequent( int array[], int lowest );

int main( void )
{
    int sum[ SIZE ] = { 0 };

    int firstRoll;
    int secondRoll;
    int counter;
    int total;

    srand( time( NULL ) );

    for ( counter = 0; counter < 36000; counter++ )
    {
        firstRoll = 1 + rand() % 6;
        secondRoll = 1 + rand() % 6;

        total = firstRoll + secondRoll;

        sum[ total ]++;
    }

    printf( "Sum of sides  |  Frequency\n" );

    for ( counter = 2; counter < SIZE; counter++ )
        printf( "%12d  |%11d\n", counter, sum[ counter ] );

    if ( mostFrequent( sum, 2 ) == 7 )
        printf( "\nThe totals are reasonable.\n" );

    return 0;
}


int rollDie( void )
{
    return 1 + rand() % 6;
}


int mostFrequent( int array[], int lowest )
{
    int frequency = 0;
    int mostFrequent = 0;

    for ( int counter = lowest; counter < SIZE; counter++ )
    {
        if ( array[ counter ] > frequency )
        {
            frequency = array[ counter ];
            mostFrequent = counter;
        }
    }

    return mostFrequent;
}
