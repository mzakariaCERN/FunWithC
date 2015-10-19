#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	string str;

	sentence = "It is cloudy and warm.";

	cout << "Line 4: substr(0, 5) in \" "
		<< sentence << " \" = \" "
		<< sentence.substr(0, 5) << " \" "
		<< endl;

	 cout << "Line 5: sibstr(6,6) in \" "
		<< sentence << " \" = \" " 
		<< sentence.substr(6,6) << " \" "
		<< endl;	
	
	cout << "Line 6: substr(6, 16) in \" "
		<< sentence << " \" = " << endl
		<< "		\" " << sentence.substr(6,16)
		<< "\" " << endl;
	
	cout << "Line 7: substr(17,10) in \" "
		<< sentence.substr(17,10) << " \" "
		<< endl;
	
	cout << "Line 8: substr(3, 6) in \" "
		<< sentence << " \" = \" "
		<< sentence.substr(3,6) << " \" "
		<< endl;

	str = sentence.substr(0, 8);
	cout << "Line 10: " << "str = \" " << str
		<< " \" " << endl;
	str = sentence.substr(2, 10);
	cout << "Line 12: " << "srt = \" " << str
		<< "\"" << endl;

	return 0;
}

