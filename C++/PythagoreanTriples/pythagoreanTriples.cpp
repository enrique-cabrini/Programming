// This program determines if three numbers are a Pythagorean triple
#include <iostream>

// Function main begins program execution
int main()
{
    // For all values of hypotenuse
    for ( int hypotenuse = 1; hypotenuse <= 500; hypotenuse++ )
    {
        // For all values of sideOne
        for ( int sideOne = 1; sideOne <= 500; sideOne++ )
        {
            // For all values of sideTwo
            for ( int sideTwo = 1; sideTwo <= 500; sideTwo++ )
            {
                // If sideOne squared + sideTwo squared equals hypotenuse squared
                if ( ( sideOne * sideOne ) + ( sideTwo * sideTwo ) == ( hypotenuse * hypotenuse ) )
                {
                    // Print a message
                    std::cout << sideOne << ", " << sideTwo << ", and " << hypotenuse <<
                        " are a Pythagorean triple." << std::endl;
                } // end if
            } // end for
        } // end for
    } // end for

    return 0; // Indicate the program ended successfully
} // end function
