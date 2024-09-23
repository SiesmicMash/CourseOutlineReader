#include <iostream>
#include "student.h"

int main() {
    // Create a student
    Student student("John Doe", 12345);

    // Add some grades and course credits
    student.addGrade(85);
    student.addCourseCredit(3);

    student.addGrade(92);
    student.addCourseCredit(4);

    student.addGrade(78);
    student.addCourseCredit(2);

    // Calculate GPA
    double gpa = student.calculateGPA();
    std::cout << "GPA: " << gpa << std::endl;

    // Predict grade needed for desired GPA
    double requiredGrade = student.predictGrade(3.5);  // Desired GPA is 3.5
    std::cout << "You need to score " << requiredGrade << " in your next course to achieve a 3.5 GPA." << std::endl;

    // Display full grade report
    student.displayGradeReport();

    return 0;
}
