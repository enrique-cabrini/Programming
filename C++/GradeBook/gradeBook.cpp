// This file contains the definitions for class GradeBook's member functions.
#include <iostream>
#include "gradeBook.h" // GradeBook header file

// Constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( std::string name, std::string name2 )
{
    setCourseName( name ); // Call set function to initialize course name
    setInstructorName( name2 ); // Call set function to initialize instructor name
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
