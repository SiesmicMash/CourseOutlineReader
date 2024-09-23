#include "student.h"
#include <iostream>
#include <numeric>  // For std::accumulate
#include <iomanip>  // For formatting output

// Constructor: Initializes student with a name and student ID
Student::Student(std::string studentName, int id) : name(studentName), studentID(id) {}

// Method to add a grade for a course
void Student::addGrade(double grade) {
    if (grade >= 0 && grade <= 100) {
        grades.push_back(grade);
    }
    else {
        std::cout << "Invalid grade. Please enter a grade between 0 and 100." << std::endl;
    }
}

// Method to add course credit (assuming credits are positive)
void Student::addCourseCredit(double credit) {
    if (credit > 0) {
        courseCredits.push_back(credit);
    }
    else {
        std::cout << "Invalid course credit. Please enter a positive value." << std::endl;
    }
}

// Getter for student's name
std::string Student::getName() const {
    return name;
}

// Getter for student ID
int Student::getStudentID() const {
    return studentID;
}

// Getter for the grades vector
const std::vector<double>& Student::getGrades() const {
    return grades;
}

// Getter for the course credits vector
const std::vector<double>& Student::getCourseCredits() const {
    return courseCredits;
}

// Function to calculate GPA based on grades and course credits
double Student::calculateGPA() const {
    if (grades.empty() || grades.size() != courseCredits.size()) {
        std::cerr << "Error: Mismatch between grades and credits or no grades available." << std::endl;
        return 0.0;
    }

    double totalWeightedGrades = 0;
    double totalCredits = 0;

    for (size_t i = 0; i < grades.size(); ++i) {
        totalWeightedGrades += grades[i] * courseCredits[i];
        totalCredits += courseCredits[i];
    }

    return (totalCredits > 0) ? (totalWeightedGrades / totalCredits) : 0.0;
}

// Function to calculate CGPA across multiple courses
double Student::calculateCGPA() const {
    return calculateGPA();  // For simplicity, CGPA is calculated the same way as GPA in this case
}

// Function to predict the required grade in the next assignment to achieve a desired GPA
double Student::predictGrade(double desiredGPA) const {
    if (grades.empty() || courseCredits.empty()) {
        std::cerr << "Error: No grades or credits available for prediction." << std::endl;
        return 0.0;
    }

    double currentGPA = calculateGPA();
    double totalCredits = std::accumulate(courseCredits.begin(), courseCredits.end(), 0.0);
    double newCredits = 3.0; // Assume the next course is worth 3 credits

    double requiredGrade = ((desiredGPA * (totalCredits + newCredits)) - (currentGPA * totalCredits)) / newCredits;

    return requiredGrade;
}

// Function to display a summary of the student's grades and GPA
void Student::displayGradeReport() const {
    std::cout << "Grade Report for " << name << " (ID: " << studentID << "):" << std::endl;

    for (size_t i = 0; i < grades.size(); ++i) {
        std::cout << "Course " << i + 1 << ": Grade = " << grades[i] << ", Credits = " << courseCredits[i] << std::endl;
    }

    double gpa = calculateGPA();
    std::cout << "Current GPA: " << std::fixed << std::setprecision(2) << gpa << std::endl;
}
