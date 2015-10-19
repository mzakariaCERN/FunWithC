#include <iostream>
#include<fstream> 
#include<iomanip>
#include<string>

using namespace std;
struct student
{
string studentFName;
string studentLName;
int testScore;
char grade;
};

int kOfMax, bestScore; 
void getData(ifstream& inData, student studentType[]);
void setGrade(ifstream& inData, student studentType[]);
int highestScore(student studentType[]);
void printHighest (student studentType[], int& kOfMax);
void printHighestName (student studentType[], int& bestScore);



student studentType[20]; //number of students in the class. 
int main()
{
//int j;

ifstream inData;
ofstream outData;



inData.open("/home/mzakaria/Desktop/LinktoResearch/LearnC/inData.txt");
outData.open("home/mzakaria/Desktop/outData.txt");

cout << "Processing data" << endl;

getData(inData, studentType);

setGrade(inData, studentType);


 
//printHighest ( studentType, kOfMax);

printHighestName ( studentType,  bestScore);



return 0;
}

void getData(ifstream& inData, student studentType[])
{
cout << "Entering getData function..." << endl;
int i;
for(i = 0; i < 21; i++){
inData >> studentType[i].studentFName >> studentType[i].studentLName >> studentType[i].testScore;


}
cout << "Done with getData ... " << endl;

}

void setGrade(ifstream& inData, student studentType[])
{
cout <<  "start setGrade..." << endl;
int j;
for (j = 0; j <= 20 ; j++)
{
     if (studentType[j].testScore >= 90)
	studentType[j].grade = 'A';
else if  (studentType[j].testScore >= 80)
	studentType[j].grade = 'B';
else if  (studentType[j].testScore >= 70)
	studentType[j].grade = 'C';
else if  (studentType[j].testScore >= 60)
	studentType[j].grade = 'D';
else if  (studentType[j].testScore >= 50)
	studentType[j].grade = 'F';

}
cout << "done with setGrade..." << endl;
}

int highestScore(student studentType[])
{
int k;
int bestScore = 0, kOfMax = 0;
for(k = 0; k < 21; k++)
{
if (studentType[k].testScore > bestScore)
{
bestScore = studentType[k].testScore;
kOfMax = k;
}
}
cout << "highest score was: " << bestScore <<endl;

cout << "end findHighest..." << endl; 
return bestScore;
}

void printHighestName (student studentType[], int& bestScore)
{
int l;
cout << "start printHighestName..." << endl;
bestScore = highestScore(  studentType);

cout << "best score was: " << bestScore << endl;
for(l = 0; l <=21; l++)
{
if (studentType[l].testScore == bestScore)
{cout << left;
cout << studentType[l].studentLName <<", "<<studentType[l].studentFName << endl; 
}
}
cout << "end printHighestName..." << endl;

}

