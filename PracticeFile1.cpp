#include <iostream>


/*
* This is a program which utilizes the iostream module to print out the avg of an unspecified number of tests of a student giving grades in the range of (0-100).
* 
* If the average of the student is over 90 they get an A, if its between 80-90 they get a B, if its between 70-80 they get a c, If its between 60-70 they get a D, otherwise they fail.
* 
* We have to assign the proper gpa based on the the letter grade the student recieve. An A = 4, B = 3, C= 2.5, D = 1.7 , F= 0.0. 
* 
* After having obtained the gpa for a single course, our goal is to calculate the students cgpa based on the number of courses the student is taking. 
* 
* Future developments:
* 1. Add an aggregate assignment and course outline reader.
* 2. Calculate the total grade of the student based on each individual class and provide a gpa estimate given the current and predicted grades of the student.
* 3. Tell the student how much they would have to get in their next assignments/tests to secure the grade of their choice.
*/

//First step is to create a function which works the as the loop for this program to continue until the user wants to exit.

void input();
float testAvgCalculator();

int main() {
	return 0;
}

float testAvgCalculator() {
	bool loop = true;
	float testGrade;
	while (loop) {
		std::cout<< "Please input the grade of"
	}

}

void input() {
	int userInput;
	bool loop = true;
	while (loop) {
		std::cout << "Hi welcome to the Score calculator, while its still a WIP, there are many functional aspects of the program" << std::endl
			<< "The current available features of the programs are:" << std::endl
			<< "1. Test Average calculator" << std::endl
			<< "2. Subject Average Calculator" << std::endl
			<< "3. Letter grade output" << std::endl;
		std::cout << "Please input the number of which feature you would like to utilize: ";
		std::cin >> userInput;
	}
}
