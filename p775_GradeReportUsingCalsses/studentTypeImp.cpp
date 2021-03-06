#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "personType.h"
#include "courseType.h"
#include "studentType.h"

using namespace std;

int studentType::getHoursEnrolled()
{
	int totalCredits = 0;
	int i;
	
	for (i = 0; i < numberOfCourses; i++)
		totalCredits += coursesEnrolled[i].getCredits();

	return totalCredits;
}


double studentType::billingAmount(double tuitionRate)
{
	return tuitionRate * getHoursEnrolled();
}
double studentType::getGpa()
{
cout << "before getGpa = " << coursesGrade[1] << endl;

	int i;
	double sum = 0.0;

	for (i = 0; i < numberOfCourses; i++)
	{	
	cout << " grades = " << coursesGrade[i] << endl;
		switch (coursesGrade[i])
		{
		case 'A':	
			sum += coursesEnrolled[i].getCredits() * 4;
			break;
		
		case 'B':	
			sum += coursesEnrolled[i].getCredits() * 3;
			break;
		case 'C':	
			sum += coursesEnrolled[i].getCredits() * 2;
			break;
		case 'D':	
			sum += coursesEnrolled[i].getCredits() * 1;
			break;
		case 'F':	
			sum += coursesEnrolled[i].getCredits() * 0;
			break;
		
		default:
			cout << "Invalid Course Grade." <<  endl;
		}
	}
	
	return sum / getHoursEnrolled();
}


void studentType::sortCourses()
{
	int i, j;
	int minIndex;
	courseType temp;
	char tempGrade;
	string course1;
	string course2;

	for (i = 0; i < numberOfCourses - 1; i++)
	{
		minIndex = i;

		for (j = i + 1; j < numberOfCourses; j++)
		{
			course1 = coursesEnrolled[minIndex].getCourseNumber();
			course2 = coursesEnrolled[j].getCourseNumber();

			if (course1 > course2)
				minIndex = j;
		}
		
		temp = coursesEnrolled[minIndex];
		coursesEnrolled[minIndex] = coursesEnrolled[i];
		coursesEnrolled[i] = temp;

		tempGrade = coursesGrade[minIndex];
		coursesGrade[minIndex] = coursesGrade[i];
		coursesGrade[i] = tempGrade;

	}
}

void studentType::print(ostream& outF, double tuitionRate)
{
	int i;
	
	outF << "Student Name: " << getFirstName() << " " << getLastName() << endl;
	outF << "Student ID: " << sId << endl;
	outF << "Number of courses enrolled: " << numberOfCourses << endl;
	outF << endl;

	outF << left;
	outF << "Course No" << setw(15) << " Course Name" << setw(8) << "Credits" << setw(6) << "Grade" << endl;
	outF << right;

	for (i = 0; i < numberOfCourses; i++)
	{
		coursesEnrolled[i].print(outF);
		if (isTuitionPaid)
		{	outF << setw(4) << coursesGrade[i] << endl;
			cout << "inside studentType::printXXXX" << coursesGrade[i] << endl;
		}
		else 
		{	outF << setw(4) << "***" << endl;
                        cout << "inside studentType::printXXXX" << coursesGrade[i] << endl;}
	}
	outF << endl;

	outF << "Total number of credit hours: " << getHoursEnrolled() << endl;
	outF << fixed << showpoint << setprecision(2);

	if (isTuitionPaid)
		outF << "Mid-Semester GPA: " << getGpa() << endl;
	else 
	{
		outF << "*** Grades are being held for not paying "
			<< "the tuition. *** "<< endl;
		outF << "Amount Due: $" << billingAmount(tuitionRate) << endl; 
	}
	
	outF << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl << endl;
	}

	studentType::studentType()
	{	
		numberOfCourses = 0;
		sId = 0;
		isTuitionPaid = false;

		for (int i = 0; i < 6; i++)
			coursesGrade[i] = '*';
	}

void studentType::setInfo(string fName, string lName, int ID, int nOfCourses, bool isTPaid, courseType courses[], char cGrades[])
{
	int i;
	setName(fName, lName);
	sId = ID;
	isTuitionPaid = isTPaid;
	numberOfCourses = nOfCourses;

	for (i= 0; i < numberOfCourses; i++)
	{
		coursesEnrolled[i] = courses[i];
		coursesGrade[i] = cGrades[i];
		cout << "in studentTypeImp, cGrades = " << cGrades[i] << " & coursesGrade = " << coursesGrade[i] << endl;
	}

	sortCourses();
}

