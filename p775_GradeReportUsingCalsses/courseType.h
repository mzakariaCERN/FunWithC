#ifndef H_courseType
#define H_courseType

#include <fstream>
#include <string>

using namespace std;

class courseType
{
public:
	void setCourseInfo(string cName, string cNo, int credits);
	// Function to set the course information.
	// The course information is set according to the 
	// parmeters.
	// Postcondition: courseName = cName; courseNo = cNo; 
	// courseCredit;

	void print(ostream& outF);
	
	int getCredits();

	string getCourseNumber();
	
	string getCourseName();
	
	courseType(string cName = "", string cNo = "", int credits = 0);

private:
	string courseName;
	string courseNo;	
	int courseCredits;
};
#endif

