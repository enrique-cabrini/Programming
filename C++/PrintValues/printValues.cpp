// This program prints 1 through 4 on the same in three different ways
#include <iostream>

int main()
{
    // One cout with one stream insertion operator
    std::cout << "1, 2, 3, 4\n";

    // One cout with four stream insertion operators
    std::cout << "\n1, " << "2, " << "3, " << "4\n";

    // Four couts
    std::cout << "\n1,";
    std::cout << " 2,";
    std::cout << " 3,";
    std::cout << " 4\n";
}
