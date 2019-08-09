// This program creates an Invoice that a hardware store might use.
// This file contains the interface part of the header.
#include <string> // Include string header file

// Class Interface
class Invoice
{
public: // access specifier public
    // Member function prototypes
    Invoice( std::string, std::string, int, int );
    void setPartNumber( std::string );
    std::string getPartNumber();
    void setPartDescription( std::string );
    std::string getPartDescription();
    void setQuantityPurchased( int );
    int getQuantityPurchased();
    void setPricePerItem( int );
    int getPricePerItem();
    int getInvoiceAmount();
private: // access specifier private
    // declare some data members
    std::string partNumber;
    std::string partDescription;
    int quantityPurchased;
    int pricePerItem;
}; // end class
