#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    std::string name;               // Name of the student
    int studentID;                  // Unique ID for the student
    std::vector<double> grades;     // Container for grades of courses
    std::vector<double> courseCredits; // Container for course credits

public:
    // Constructor
    Student(std::string studentName, int id);

    // Setters
    void addGrade(double grade);           // Adds a grade to the student's record
    void addCourseCredit(double credit);   // Adds a course credit to the student's record

    // Getters
    std::string getName() const;           // Returns the student's name
    int getStudentID() const;               // Returns the student's ID
    const std::vector<double>& getGrades() const; // Returns the grades vector
    const std::vector<double>& getCourseCredits() const; // Returns the course credits vector

    // GPA Calculation
    double calculateGPA() const;           // Calculates GPA based on grades and course credits
    double calculateCGPA() const;          // Calculates CGPA based on all courses taken

    // Future Development Methods
    double predictGrade(double desiredGPA) const; // Predict the grade needed in future assignments
    void displayGradeReport() const;              // Displays a summary of grades and GPA

    // Additional methods can be added as needed
};

#endif // STUDENT_H
