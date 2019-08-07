// Class GradeBook's client file
#include <iostream>
#include "gradeBook.h" // Class GradeBook's header file

// Program execution begins at function main
int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming", "Lorenzo Cabrini" );
    GradeBook gradeBook2( "CS102 Data Structures in C++", "Dennis" );

    // display initial value of courseName for each GradeBook
    std::cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << std::endl;

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();

    return 0;
} // end function
