#include <iostream>

using namespace std;

int main()
{
	int item[5];
	int sum;
	int counter;

	cout << "Enter five numbers: ";

	sum = 0;

	for (counter = 0; counter < 5; counter++)
	{
		cin >> item[counter];
		sum = sum + item[counter];
	}

	cout << endl;	
	
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The numbers in reverse order are: ";
	
	for (counter = 4; counter >= 0; counter --)
		cout << item[counter] << " ";

	cout << endl;

	return 0;

}

