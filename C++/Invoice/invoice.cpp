// This file contains the implementation of class Invoice.
// Member functions prototypes are defined in this file.
#include <iostream>
#include "invoice.h" // include class Invoice's header file

// Constructor to initialize data members
Invoice::Invoice( std::string number, std::string description, int quantity, int price )
{
    setPartNumber( number ); // initialize partNumber in set function
    setPartDescription( description ); // initialize partDescription in set function
    setQuantityPurchased( quantity ); // initialize quantityPurchased in set function
    setPricePerItem( price ); // initialize pricePerItem in set function
} // end function

// function to set partNumber
void Invoice::setPartNumber( std::string number )
{
    partNumber = number; // assign value of number to partNumber
} // end function

// function to get partNumber
std::string Invoice::getPartNumber()
{
    return partNumber; // return partNumber
} // end function

// function to set getPartDescription
void Invoice::setPartDescription( std::string description )
{
    partDescription = description; // assign the value of description to partDescription
} // end function

// function to get partDescription
std::string Invoice::getPartDescription()
{
    return partDescription; // return partDescription
} // end function

// function to set quantityPurchased
void Invoice::setQuantityPurchased( int quantity )
{
    quantityPurchased = quantity; // assign the value of quantity to quantityPurchased
} // end function

// function to get quantityPurchased
int Invoice::getQuantityPurchased()
{
    return quantityPurchased; // return quantityPurchased
} // end function

// function to set pricePerItem
void Invoice::setPricePerItem( int price )
{
    pricePerItem = price; // assign the value of price to pricePerItem
} // end function

// function to get pricePerItem
int Invoice::getPricePerItem()
{
    return pricePerItem; // return pricePerItem
} // end function

// function to get the invoice amount
int Invoice::getInvoiceAmount()
{
    int invoiceAmount; // declare a variable

    // Check if quantityPurchased is less than 0
    if ( quantityPurchased < 0 )
        quantityPurchased = 0; // set quantityPurchased to 0

    // Check if pricePerItem is less than 0
    if ( pricePerItem < 0 )
        pricePerItem = 0; // set pricePerItem to 0

    invoiceAmount = pricePerItem * quantityPurchased; // calculate the invoice amount

    return invoiceAmount; // return invoiceAmount
} // end function
