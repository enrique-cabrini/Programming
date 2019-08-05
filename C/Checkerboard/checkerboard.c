/* This program draws a checkerboard pattern */
#include <stdio.h>

int main( void )
{
    /* Draw pattern with eight printf statements */
    printf( "* * * * * * * * \n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * * \n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * * \n" );
    printf( " * * * * * * * *\n" );
    printf( "* * * * * * * * \n" );
    printf( " * * * * * * * *\n" );

    /* Draw pattern with as few printf statements as possible */
    printf( "\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n" );
    printf( "* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n" );

    return 0;
} /* end function */
