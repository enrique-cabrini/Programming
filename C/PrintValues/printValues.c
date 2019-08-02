/* This program prints the numbers 1 to 4 on the same line in three ways. */
#include <stdio.h>

int main( void )
{
    /* One printf with no conversion specifiers */
    printf( "1, 2, 3, 4\n" );

    /* One printf with conversion specifiers */
    printf( "\n%d, %d, %d, %d\n", 1, 2, 3, 4 );

    /* Four printfs */
    printf( "\n1, " );
    printf( "2, " );
    printf( "3, " );
    printf( "4\n" );

    return 0;
} /* end function */
