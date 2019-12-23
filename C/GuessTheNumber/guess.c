/* This program simulates a game of guess the number */
#include <stdio.h>
#include <stdlib.h>

int generateNumber( void );
int gameLoop( void );

/* Function main begins program execution */
int main( void )
{
    char playAgain = ' '; /* Define a variable */

    while ( 1 )
    {
        if ( gameLoop() == 1 )
        {
            printf( "Would you like to play again (y or n)? " );
            scanf( " %c", &playAgain );

            if ( playAgain == 'n' )
                break;
        }
    }

    return 0;
} /* end function */

/* Game loop */
int gameLoop( void )
{
    /* Declare variables */
    int randomNumber;
    int userGuess;

    printf( "I have a number between 1 and 1000.\nCan you guess my number?\n" );

    randomNumber = generateNumber();
    printf( "%d\n", randomNumber );

    printf( "Please type your first guess. " );
    scanf( "%d", &userGuess );

    while ( 1 )
    {
        if ( userGuess > randomNumber )
            printf( "Too high. Try again. " );
        else if ( userGuess < randomNumber )
            printf( "Too low. Try again. " );
        else
        {
            printf( "Excellent! You guessed the number!\n" );
            return 1;
        }

        scanf( "%d", &userGuess );
    } /* end while */
} /* end function */

/* Function to generate a random number */
int generateNumber( void )
{
    return 1 + rand() % 1000;
} /* end function */
