#include <iostream>
#include <cmath>

using namespace std;

bool isNumPalindrome(int num);

int main()
{
int num;
bool result;

cout << "Enter a number to see if it is a palindrome or not" << endl;
cin >> num;

result = isNumPalindrome(num);
 
if (result == 1)
	cout << "The number is Palindrome." << endl;
else
	cout << "The number is not Palindrome." <<endl;

}

bool isNumPalindrome(int num)
{
	int pwr = 0;

	if (num < 10)
		return true;

	else
		{

		while (num / static_cast<int> (pow(10, pwr)) >= 10)
			pwr++;
			while (num >=10)
			{
				int tenTopwr = static_cast<int> (pow(10,pwr));

				if ((num / tenTopwr) != (num % 10))
					return false;
				else
				{
					num = num % tenTopwr;
					num = num / 10;
					pwr = pwr - 2;
				}
			}
		return true;
		}
}

