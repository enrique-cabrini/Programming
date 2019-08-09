// This program tests class Employee's capabilities
#include <iostream>
#include "employee.h" // Include class Employee's header file

// Program execution begins at function main
int main()
{
    // Declare variables
    int yearlySalary1;
    int yearlySalary2;
    int raise1;
    int raise2;

    // Create two class Employee objects
    Employee employee1( "Codel", "Greg", 12000 );
    Employee employee2( "Retarded", "Eugene", -345 );

    // Calculate and display employee1's yearly salary
    yearlySalary1 = employee1.getMonthlySalary() * 12;
    std::cout << "\n" << employee1.getFirstName() << " " << employee1.getLastName()
        << "'s yearly salary is $" << yearlySalary1 << std::endl;

    // Calculate and display employee2's yearly salary
    yearlySalary2 = employee2.getMonthlySalary() * 12;
    std::cout << employee2.getFirstName() << " " << employee2.getLastName()
        << "'s yearly salary is $" << yearlySalary2 << std::endl;

    // Give employee1 a 10% raise
    raise1 = ( 10 / 100 ) * yearlySalary1;
    std::cout << "\n" << employee1.getFirstName() << " " << employee1.getLastName()
        << "'s yearly salary after 10% raise is $" << yearlySalary1 + raise1 << std::endl;

    // Give employee2 a 10% raise
    raise2 = ( 10 / 100 ) * yearlySalary2;
    std::cout << employee2.getFirstName() << " " << employee1.getLastName()
        << "'s yearly salary after 10% raise is $" << yearlySalary2 + raise2 << std::endl;

    return 0; // Indicate the program terminated successfully
} // end function
