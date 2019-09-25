// This program calculates total sales
#include <iostream>
#include <iomanip>

// Function main begins program execution
int main()
{
    // Declare variables
    int product;
    int quantity;
    double totalRetail;

    std::cout << "Enter the product number ( -1 to quit ): "; // Prompt user for input
    std::cin >> product; // Read product from user

    // While the value of product is not 1
    while ( product != -1 )
    {
        std::cout << "Enter quantity: "; // Prompt user for input
        std::cin >> quantity; // Read quantity from user

        // Check all possible values of product
        switch ( product )
        {
            case 1: // When product is 1
                totalRetail += 2.98 * quantity; // Add the price times quantity to totalRetail
                break; // Exit the loop

            case 2: // When product is 2
                totalRetail += 4.50 * quantity; // Add the price times quantity to totalRetail
                break; // Exit the loop

            case 3: // When product is 3
                totalRetail += 9.98 * quantity; // Add the price times quantity to totalRetail
                break; // Exit the loop

            case 4: // When product is
                totalRetail += 4.49 * quantity; // Add the price times quantity to totalRetail
                break; // Exit the loop

            case 5: // When product is 5
                totalRetail += 6.87 * quantity; // Add the price times quantity to totalRetail
                break; // Exit the loop

            case '\t': // When product is a tabspace
            case '\n': // When product is a newline
            case ' ': // When product is a white space
                break; // Exit the loop

            default: // For all other values of product
                std::cerr << "Invalid input!" << std::endl; // Print a message
                break; // Exit the loop
        } // end switch

        std::cout << "Enter the product number ( -1 to quit ): "; // Prompt user for input
        std::cin >> product; // Read product from user
    } // end while

    // Print the result
    std::cout << "\nThe total retail price was $" << std::setprecision( 3 ) << std::fixed
        << totalRetail << std::endl;

    return 0; // Indicate the program ended successfully
} // end function 
