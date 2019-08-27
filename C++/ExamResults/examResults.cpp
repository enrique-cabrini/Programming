// Analysis of exam results
#include <iostream>

// Program execution begins at function main
int main()
{
    // initializing variables in declarations
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;
    int validator = 1;

    // Process 10 students using counter-controlled loop
    while ( studentCounter <= 10 )
    {
        if ( validator != 2 )
        {
            std::cout << "Enter result ( 1 = pass, 2 = fail ): "; // Prompt user for input
            std::cin >> result; // Read result from user

            if ( result == 1 )           // If result is 1
                passes = passes + 1;     // Increment passes
            else if ( result == 2 )      // If result is 2
                failures = failures + 1; // Increment failures
            else                         // Otherwise
                validator = 2;           // Set validator to 2

            while ( validator == 2 )
            {
                std::cout << "Incorrect result. Enter 1 for pass, or 2 for fail: ";
                std::cin >> result;

                if ( result == 1 )           // If result is 1
                {
                    passes = passes + 1;     // Increment passes
                    validator = 1;           // Set validator to 1
                } // end if
                else if ( result == 2 )      // If result is 2
                {
                    failures = failures + 1; // Increment failures
                    validator = 1;           // Set validator to 1
                } // end else if
            } // end while
        } // end if

        studentCounter = studentCounter + 1; // Increment studentCounter
    } // end while

    // termination phase; display number of passes and failures
    std::cout << "Passed " << passes << "\nFailed " << failures << std::endl;

    // determine whether more than eight students passed
    if ( passes > 8 )
        std::cout << "Bonus to instructor!" << std::endl;

    return 0; // Indicate the program ended successfully
} // end function
