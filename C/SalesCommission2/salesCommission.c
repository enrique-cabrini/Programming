#include <stdio.h>
#define FREQUENCY 11

int main( void )
{
    int ranges[ FREQUENCY ] = { 0, 0 };

    int salary;
    int grossSales;
    int counter;

    for ( counter = 0; counter < 5; counter++ )
    {
        printf( "Enter gross sales for this week: " );
        scanf( "%d", &grossSales );

        salary = 200 + ( 0.09 * grossSales );

        if ( salary > 1000 )
            ranges[ 10 ]++;
        else
            ranges[ salary / 100 ]++;
    }

    printf( "\nSalespeople earning salaries in the following ranges are: " );

    for ( counter = 2; counter < FREQUENCY; counter++ )
    {
        printf( "\n%d-%d: %d", ( counter * 100 ), ( counter * 100 + 99 ),
                ranges[ counter ] );
    }

    printf( "\n" );

    return 0;
}
