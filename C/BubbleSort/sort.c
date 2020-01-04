#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000

void bubbleSort( int array[] );

int main( void )
{
    int numbers[ SIZE ];
    int a;

    for ( a = 0; a < SIZE; a++ )
        numbers[ a ] = 1 + rand() % 100;

    printf( "Original order of array:\n" );

    for ( a = 0; a < SIZE; a++ )
    {
        printf( "%d ", numbers[ a ] );

        if ( a % 20 == 0 )
            printf( "\n" );
    }

    printf( "\n" );

    printf( "\nNew order of the array:\n" );

    bubbleSort( numbers );

    for ( a = 0; a < SIZE; a++ )
    {
        printf( "%d ", numbers[ a ] );

        if ( a % 20 == 0 )
            printf( "\n" );
    }

    printf( "\n" );

    return 0;
}


void bubbleSort( int array[] )
{
    int passes;
    int i;
    int a;
    int hold = 0;

    for ( passes = 1; passes <= SIZE - 1; passes++ )
    {
        a = 0;
        
        for ( i = 0; i < SIZE - passes; i++ )
        {
            if ( array[ i ] > array[ i + 1 ] )
            {
                hold = array[ i ];
                array[ i ] = array[ i + 1 ];
                array[ i + 1 ] = hold;
                a = 1;
            }
        }

        if ( a == 0 )
            break;
    }
}
