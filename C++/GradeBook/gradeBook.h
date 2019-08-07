// Header file for class GradeBook which contains its interface
#include <string> // String header file

// Class GradeBook definition
class GradeBook
{
public:
    GradeBook( std::string, std::string ); // Constructor that initializes the course name and instructor name
    void setCourseName( std::string ); // Function that sets the course name
    void setInstructorName( std::string ); // Function that sets the instructor name
    std::string getCourseName(); // Function that gets the course name
    std::string getInstructorName(); // Function that gets the instructor name
    void displayMessage(); // Function that displays a welcome message
private:
    std::string courseName; // courseName for this GradeBook
    std::string instructorName; // course instructor
}; // end class
