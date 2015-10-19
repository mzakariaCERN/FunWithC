#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name, firstName;
	string str;
	string::size_type len;

	firstName = "Elizabeth";
	name = firstName + " Jones";
	str = "It is sunny and warm.";

	cout << "Line 7: Length of \"" << firstName << "\" = "
		<< static_cast<unsigned int> (firstName.length())
		<< endl;
	cout << "Line 8: Length of \"" << name << "\" = "
		<< static_cast<unsigned int> (name.length())
		<< endl;
	cout << "Line 9: Length of \"" << str << "\" = " 
		<< static_cast<unsigned int> (str.length())
		<< endl;

	len = firstName.length();
	cout << "Line 11: len = "
		<< static_cast<unsigned int> (len)
		<< endl;

	len = name.length();
	cout << "Line 13: len = "
		<< static_cast<unsigned int> (len) << endl;
	len = str.length();
	cout << "Line 15: len = "
		<< static_cast<unsigned int> (len) << endl;

	return 0;
}

	
