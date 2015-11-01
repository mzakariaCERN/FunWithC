





#include <iostream> 
#include <fstream>
#include <string>
#include "studentType.h"

using namespace std;

const int MAX_NO_OF_STUDENTS = 10;

void getStudentData(ifstream& infile, studentType studentList[], int numberOfStudents);
void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents, double tuitionRate);

int main()
{
	studentType studentList[MAX_NO_OF_STUDENTS];

	int noOfStudents;
	double tuitionRate;
	ifstream infile;
	ofstream outfile;

	infile.open("stData.txt");

	if (!infile)
	{
		cout << "The input file does not exist. "
			<< "Program terminates." << endl;
		return 1;
	}

	outfile.open("sDataOut.txt");

	infile >> noOfStudents;
	infile >> tuitionRate;

	getStudentData(infile, studentList, noOfStudents);
	printGradeReports(outfile, studentList, noOfStudents, tuitionRate);

	return 0;
}

void getStudentData(ifstream& infile, studentType studentList[], int numberOfStudents){
	string fName;
	string lName;
	int ID;
	int noOfCourses;
	char isPaid;
	bool isTuitionPaid;
	string cName;
	string cNo;
	int credits;
	int count;
	int i;

	courseType courses[6];

	char cGrades[6];

	for (count = 0; count < numberOfStudents; count++)
	{
		infile >> fName >> lName >> ID >> isPaid;

		if (isPaid == 'Y')
		{	isTuitionPaid = true;
//	cout << "is paid" << endl;
		}
		else
		{
			isTuitionPaid = false;
		//cout << "is not paid" << endl;
                }
		infile >> noOfCourses;
//cout << "number of courses " << noOfCourses << endl;
		for (i = 0; i < noOfCourses; i++)
		{
			infile >> cName >> cNo >> credits >> cGrades[i];
// cout << cName << " " << cNo << " " << credits << " " << cGrades[i] << endl;
//			cout << "(p777.C L78) inside getstudentdata. cName = " << cName <<" Grades = " << cGrades[i] << endl;
			courses[i].setCourseInfo(cName, cNo, credits);
		}
		studentList[count].setInfo(fName, lName, ID, noOfCourses, isTuitionPaid, courses, cGrades);
	}
//studentList[0].setInfo(fName, lName, ID, noOfCourses, isTuitionPaid, courses, cGrades);

cout << "trying to output in main: " << studentList[0].getGpa() << endl;
}

void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents, double tuitionRate)
{
	int count;
	for (count = 0; count < numberOfStudents; count++)
		studentList[count].print(outfile, tuitionRate);
}

