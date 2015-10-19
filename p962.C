#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string sentence;
	string str1, str2, str3;

	try
	{
		sentence = "Testing string exceptions!";
		cout << "Line 5: sentence = " << sentence << endl;
		cout << "Line 6: sentence.length() = " << static_cast<int>(sentence.length()) << endl;
		
		str1 = sentence.substr(8, 20);
		cout << "Line 8: str1 = " << str1 << endl;
		
		str2 = sentence.substr(28, 10);
		cout << "Line 10: str2 = " << str2 << endl;

		str3 = "Exception handling. " + sentence;
		cout << "Line 12: str3 = " << str3 << endl;
	}

	catch (out_of_range re)
	{
		cout << "Line 14: In the out_of_range " << "catch block: " << re.what() << endl;
	}
	
	catch (length_error le)
	{
		cout << "Line 16: In the length_error " << "catch block: " << le.what() << endl;
	}
	return 0;
}	
