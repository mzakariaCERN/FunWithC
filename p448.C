#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "William Jacob";
	string str1, str2, str3, str4;

	cout << "Line 3: Name = " << name << endl;
	
	str1 = "Hello There";
	cout << "Line 5: str1 = " << str1 << endl;
	
	str2 = str1;
	cout << "Line 7: str2 = " << str2 << endl;
	
	str1 = "Sunny";
	str2 = str1 + " Day";
	cout << "Line 10: str2 = " << str2 << endl;
	
	str1 = "Hello";
	str2 = "There";
	str3 = str1 + " " + str2;
	cout << "Line 14: str3 = " << str3 << endl;

	str3 = str1 + ' ' + str2;
	cout << "Line 16: str3 = " << str3 << endl;

	str1 = str1 + " Mickey";
	cout << "Line 18: str1 = " << str1 << endl;

	str1 = "Hello there";
	cout << "Line 20: str1[6] = " << str1[6] << endl;

	str1[6] = 'T';
	cout << "Line 22: str1 = " <<  str1 << endl;

	cout << "Line 23: Enter a string with "
		<< "no blanks: ";
	cin >> str1;

	char ch;
	cin.get(ch);
	cout << endl;	
	
	cout << "Line 28: The string you entered = "
		<< str1 << endl;

	cout << "Line 29: Enter a sentence: ";
	getline(cin, str2);
	cout << endl;	
	
	cout << "Line 32: The sentence is: " << str2
		<< endl;

	return 0;
}
 
