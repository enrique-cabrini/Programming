// This program tests the capabilities of class Invoice
#include <iostream>
#include "invoice.h" // include class Invoice's header file

// program execution begins at function main
int main()
{
    // create two class Invoice objects
    Invoice invoice1( "015bd6", "Nvidia GTX 1080 graphics card", 4, 1160 );
    Invoice invoice2( "054gh3", "Asus ROG strix Z390 motherboard", 1, 23199 );

    // display invoice for invoice1
    std::cout << "Part number: " << invoice1.getPartNumber() << std::endl;
    std::cout << "Part description: " << invoice1.getPartDescription() << std::endl;
    std::cout << "Quantity purchased: " << invoice1.getQuantityPurchased() << std::endl;
    std::cout << "Price per item: $" << invoice1.getPricePerItem() << std::endl;
    std::cout << "Price of items bought: $" << invoice1.getInvoiceAmount() << std::endl;

    // display invoice for invoice2
    std::cout << "\nPart number: " << invoice2.getPartNumber() << std::endl;
    std::cout << "Part description: " << invoice2.getPartDescription() << std::endl;
    std::cout << "Quantity purchased: " << invoice2.getQuantityPurchased() << std::endl;
    std::cout << "Price per item: $" << invoice2.getPricePerItem() << std::endl;
    std::cout << "Price of items bought: $" << invoice2.getInvoiceAmount() << std::endl;

    return 0; // Indicate the program terminated successfully
} // end function
