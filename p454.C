#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence, str;
	string::size_type position;

	sentence = "Outside it is cloudy and warm.";
	str = "cloudy";

	cout << "Line 5: sentence = \"" << sentence
		<< "\"" << endl;

	cout << "Line 6: The position of \"is\" in sentence = " 
		<< static_cast<unsigned int> (sentence.find("is"))
		<< endl;
	
	cout << "Line 7: The position of \"and\" in sentence = " 
		<< static_cast<unsigned int> (sentence.find("and"))
		<< endl;

	cout << "Line 8: The position of 's' in sentence = "
		<< static_cast<unsigned int> (sentence.find('s'))
		<< endl;

	cout << "Line 9: The position of 'o' in sentence = " 
		<< static_cast<unsigned int> (sentence.find('o'))
		<< endl;
	cout << "Line 10: The position of \"" << str << "\" in sentence = "
		<< static_cast<unsigned int> (sentence.find(str))
		<< endl;

	cout << "Line 11: The position of \"the\" in sentence = " 
		<< static_cast<unsigned int> (sentence.find("the"))
		<< endl;

	cout << "Line 12: The first occurrence of \'i\' in "
		<< "sentence \n		after position 6 = "
		<< static_cast<unsigned int> (sentence.find('i',6))
		<< endl;
	position = sentence.find("warm");
	cout << "Line 14: " << "Position = "
		<< static_cast<unsigned int> (position)
		<< endl;
	
	return 0;
}

