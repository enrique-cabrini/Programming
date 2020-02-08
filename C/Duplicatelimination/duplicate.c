#include <stdio.h>
#define SIZE 20

int search( const int array[], int key );
void printArray( int array[] );

int main( void )
{
    int numbers[ SIZE ];

    int number;
    int element;
    int counter;

    for ( counter = 0; counter < SIZE; counter++ )
    {
        printf( "Enter a number between 10 and 100: " );
        scanf( "%d", &number );

        element = search( numbers, number );

        if ( number >= 10 && number <= 100 )
        {
            if ( element == -1 )
            {
                numbers[ counter ] = number;
                printf( "You entered %d.\n", number );
            }
            else
                printf( "The number already exists.\n" );
        }
        else
            printf( "Invalid input!\n" );
    }

    printf( "\n" );
    printArray( numbers );
    printf( "\n" );

    return 0;
}


int search( const int array[], int key )
{
    for ( int counter = 0; counter < SIZE; counter++ )
    {
        if ( array[ counter ] == key )
            return counter;
    }

    return -1;
}


void printArray( int array[] )
{
    for ( int counter = 0; counter < SIZE; counter++ )
    {
        printf( "%d, ", array[ counter ] );

        if ( counter % 5 == 0 )
            printf( "\n" );
    }
}
