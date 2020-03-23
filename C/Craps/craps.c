#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLL_FREQUENCY 22

enum Status { WON, CONTINUE, LOST };

int rollDice( void );
double winChances( int array[], int games );
double averageGameLength( int rolls, int games );

int main( void )
{
    int sum;
    int point;
    int counter;
    int rolls;
    int totalRolls = 0;
    int totalGames = 1000;

    int rollsToWin[ ROLL_FREQUENCY ] = { 0 };
    int rollsToLose[ ROLL_FREQUENCY ] = { 0 };

    enum Status gameStatus;

    srand( time( NULL ) );

    for ( counter = 0; counter < totalGames; counter++ )
    {
        rolls = 1;
        sum = rollDice();

        switch ( sum )
        {
            case 7:
            case 11:
                gameStatus = WON;
                break;

            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                break;

            default:
                gameStatus = CONTINUE;
                point = sum;
                break;
        }

        while ( gameStatus == CONTINUE )
        {
            sum = rollDice();

            if ( sum == point )
                gameStatus = WON;
            else if ( sum == 7 )
                gameStatus = LOST;

            rolls++;
        }

        totalRolls += rolls;

        if ( gameStatus == WON )
        {
            rollsToWin[ rolls ]++;

            if ( rolls > 21 )
                rollsToWin[ 21 ]++;
        }
        else
        {
            rollsToLose[ rolls ]++;

            if ( rolls > 21 )
                rollsToLose[ 21 ]++;
        }
    }

    /* Print number of wins for each number of rolls */
    printf( "\n" );
    for ( counter = 1; counter < ROLL_FREQUENCY; counter++ )
    {
        printf( "The number of wins for %d %s are %d.\n", counter,
                ( counter == 1 ? "roll" : "rolls" ), rollsToWin[ counter ] );
    }

    /* Print number of losses for each number of rolls */
    printf( "\n" );
    for ( counter = 1; counter < ROLL_FREQUENCY - 1; counter++ )
    {
        printf( "The number of losses for %d %s are %d.\n", counter,
                ( counter == 1 ? "roll" : "rolls" ), rollsToLose[ counter ] );
    }

    /* Print the chances of winning */
    printf( "\nThe chances of winning at craps are %.3lf.\n",
            winChances( rollsToWin, totalGames ) );

    /* Print the average length of a game of craps */
    printf( "\nThe average length of a game of craps is %.3lf.\n",
            averageGameLength( totalRolls, totalGames ) );

    return 0;
}


int rollDice( void )
{
    int die1;
    int die2;
    int workSum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    workSum = die1 + die2;

    return workSum;
}


double winChances( int array[], int games )
{
    int counter;
    int total = 0;
    double chances;

    for ( counter = 1; counter < ROLL_FREQUENCY - 1; counter++ )
        total++;

    chances = ( double ) total / games;

    return chances;
}


double averageGameLength( int rolls, int games )
{
    double averageGameLength = ( double ) rolls / games;

    return averageGameLength;
}
