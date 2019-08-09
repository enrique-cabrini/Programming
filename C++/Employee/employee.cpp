// This file contains the implementation of class Employee
// Prototyped member functions are defined in this file
#include <iostream>
#include "employee.h" // Include class Employee's header file

// Constructor to initialize the data members
Employee::Employee( std::string name, std::string name2, int amount )
{
    setFirstName( name ); // initialize firstName in a set function
    setLastName( name2 ); // initialize lastName in a set function
    setMonthlySalary( amount ); // initialize monthlySalary in a set function
} // end function

// function to set firstName
void Employee::setFirstName( std::string name )
{
    firstName = name; // assign the value of name to firstName
} // end function

// function to get firstName
std::string Employee::getFirstName()
{
    return firstName; // return firstName
} // end function

// function to set lastName
void Employee::setLastName( std::string name )
{
    lastName = name; // assign the value of name to lastName
} // end function

// function to get lastName
std::string Employee::getLastName()
{
    return lastName; // return lastName
} // end function

// function to set monthlySalary
void Employee::setMonthlySalary( int amount )
{
    // Check if amount is less than 0
    if ( amount < 0 )
    {
        amount = 0; // set amount to 0
        monthlySalary = amount; // assign the value of amount to monthlySalary
        std::cerr << "Monthly salary invalid. Set monthly salary to 0." << std::endl;
    } // end if
    else // if amount is greater than 0
        monthlySalary = amount; // assign the value of amount to monthlySalary
} // end function

// function to get monthlySalary
int Employee::getMonthlySalary()
{
    return monthlySalary; // return monthlySalary
} // end function
