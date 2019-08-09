// This program creates an employee class and calculates the employee's salary
// This file contain's class Employee's interface
#include <string> // Include string header file

// Class Employee interface
class Employee
{
public: // access specifier public
    // Prototype member function
    Employee( std::string, std::string, int );
    void setFirstName( std::string );
    std::string getFirstName();
    void setLastName( std::string );
    std::string getLastName();
    void setMonthlySalary( int );
    int getMonthlySalary();
private: // access specifier private
    // Declare data members
    std::string firstName;
    std::string lastName;
    int monthlySalary;
}; // end class
