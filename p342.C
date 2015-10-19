#include <iostream>
#include <string>
using namespace std; 

int isVowel(char c);
int main()
{
char a;
cout << "Enter a character" << endl;
cin >> a ;
cout << "You have entered: "<< a << endl;
cout << "isVowel: " << isVowel( a);
if (isVowel(a))
	cout << "this is a vowel" << endl;
else
	cout<< "this is not a vowel" << endl;
return 0;
}

int isVowel(char b)
{
if (static_cast<int>(b) == static_cast<int>('a') || static_cast<int>(b) == static_cast<int>('e') || static_cast<int>(b) == static_cast<int>('i') || static_cast<int>(b) == static_cast<int>('o') || static_cast<int>(b) == static_cast<int>('u'))
return 1;
else 
return 0;
}
