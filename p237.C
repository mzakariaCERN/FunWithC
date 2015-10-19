//Program: AVG1

#include <iostream>

using namespace std;

int main()
{
	int limit; 

	int number;
	int sum;
	int counter;
	
	cout << "Line 1: Enter data for processing"
		<< endl;
	cin >> limit;
	
	sum = 0;
	counter = 0;

	while (counter < limit)
	{
		cin >> number;
		sum = sum + number;
		counter++;
	}

	cout << "Line 9: The sum of the " << limit
		<< " numbers = " << sum << endl;

	if (counter !=0)
	cout << "Line 11: The average = "
		<< sum / counter << endl;
	else 
		cout << "Line 13: No input. " << endl;

	return 0;
} 
