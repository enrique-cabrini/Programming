// Header file for class GradeBook which contains its interface
#include <string> // String header file
#include <iomanip> // Input Output manipulator header file

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
    void inputGrades(); // Function that gets an arbitrary number of grades from the user
    double calculateAverage(); // Function to calculate the average
    void displayGradeReport(); // Function to display a report based on the grades
private:
    std::string courseName; // courseName for this GradeBook
    std::string instructorName; // course instructor
    int aCount; // count of A grades
    int bCount; // count of B grades
    int cCount; // count of C grades
    int dCount; // count of D grades
    int fCount; // count of F grades
    int totalGradePoints; // total grade points
    int numberOfGradePoints; // number of grade points
}; // end class
