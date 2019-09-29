// This file contains the definitions for class GradeBook's member functions.
#include <iostream>
#include "gradeBook.h" // GradeBook header file

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( std::string name, std::string name2 )
{
    setCourseName( name ); // Call set function to initialize course name
    setInstructorName( name2 ); // Call set function to initialize instructor name
    aCount = 0; // Initialize aCount to 0
    bCount = 0; // Initialize bCount to 0
    cCount = 0; // Initialize cCount to 0
    dCount = 0; // Initialize dCount to 0
    fCount = 0; // Initialize fCount to 0
    numberOfGradePoints = 0; // Initialize numberOfGradePoints to 0
    totalGradePoints = 0; // Initialize totalGradePoints to 0
} // end function


// function to set the course name
void GradeBook::setCourseName( std::string name )
{
    courseName = name; // store the course name in the object
} // end function


// Function to set instructor name
void GradeBook::setInstructorName( std::string name )
{
    instructorName = name;
} // end function


// Function to get the course name
std::string GradeBook::getCourseName()
{
    return courseName; // return object's course name
} // end function


// Function to get instructor name
std::string GradeBook::getInstructorName()
{
    return instructorName;
}


// display a message
void GradeBook::displayMessage()
{
    std::cout << "Welcome to the grade book for \n" << getCourseName()
        << "!" << std::endl;
    std::cout << "This course is presented by: \n" << getInstructorName()
        << "!" << std::endl;
} // end function


// Function to get an arbitrary number of grades from user
void GradeBook::inputGrades()
{
    int grade; // grade entered by user

    // Prompt user for input
    std::cout << "Enter the letter grades." << std::endl
        << "Enter the EOF character to end input" << std::endl;

    // While grade is not the EOF character
    while ( ( grade = std::cin.get() ) != EOF )
    {
        switch ( grade ) // Check all possible values of grade
        {
            case 'A': // When grade is A
            case 'a': // when grade is a
                aCount++; // Increment aCount
                totalGradePoints += 4; // Add 4 to totalGradePoints
                numberOfGradePoints++; // Add 1 to numberOfGradePoints
                break; // Exit the loop

            case 'B': // When grade is B
            case 'b': // when grade is b
                bCount++; // Increment bCount
                totalGradePoints += 3; // Add 3 to totalGradePoints
                numberOfGradePoints++; // Add 1 to numberOfGradePoints
                break; // Exit the loop

            case 'C': // When grade is C
            case 'c': // when grade is c
                cCount++; // Increment cCount
                totalGradePoints += 2; // Add 2 to totalGradePoints
                numberOfGradePoints++; // Add 1 to numberOfGradePoints
                break; // Exit the loop

            case 'D': // When grade is D
            case 'd': // when grade is d
                dCount++; // Increment dCount
                totalGradePoints += 1; // Add 1 to totalGradePoints
                numberOfGradePoints++; // Add 1 to numberOfGradePoints
                break; // Exit the loop

            case 'F': // When grade is F
            case 'f': // when grade is f
                fCount++; // Increment fCount
                numberOfGradePoints++; // Add 1 to numberOfGradePoints
                break; // Exit the loop

            case '\n': // When grade is a newline
            case '\t': // When grade is a tabspace
            case ' ': // When grade is a whitespace
                break; // Exit the loop

            default: // For all other values of grade
                // Print a message
                std::cout << "Incorrect  letter grade entered."
                    << "Enter a new grade." << std::endl;
                break; // Exit the loop
        } // end switch
    } // end while
} // end function


// Function to calculate the average
double GradeBook::calculateAverage()
{
    // Calculate average
    double average = static_cast< double >( totalGradePoints ) / numberOfGradePoints;

    return average; // Return the new value of average
} // end function


// Function to display a report based on the grades input by the user
void GradeBook::displayGradeReport()
{
    // Output summary of results
    std::cout << "\n\nNumber of students who received each letter grade:"
        << "\nA: " << aCount
        << "\nB: " << bCount
        << "\nC: " << cCount
        << "\nD: " << dCount
        << "\nF: " << fCount
        << "\n\nThe average is: " << calculateAverage()
        << std::endl;
} // end funtion
