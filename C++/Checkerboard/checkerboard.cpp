// This program draws a checkerboard pattern
#include <iostream>

int main()
{
    // Draw checkerboard with eight cout statements.
    std::cout << "* * * * * * * * \n";
    std::cout << " * * * * * * * *\n";
    std::cout << "* * * * * * * * \n";
    std::cout << " * * * * * * * *\n";
    std::cout << "* * * * * * * * \n";
    std::cout << " * * * * * * * *\n";
    std::cout << "* * * * * * * * \n";
    std::cout << " * * * * * * * *" << std::endl;

    // Draw checkerboard with as few cout statements as possible
    std::cout << "\n* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n";
    std::cout << "* * * * * * * * \n * * * * * * * *\n* * * * * * * * \n * * * * * * * *\n";

    return 0;
} // end function
