// Program rodeermine the sum of the first n positive numbers. 

#include <iostream>

using namespace std;

int main()
{
	int counter;
	int sum;
	int N;

	cout << "Line 1: Enter the number of positve "
		<< "integers to be added: ";
	cin >> N;
	sum = 0;
	cout << endl;

	for (counter = 1; counter <= N; counter++)
		sum = sum + counter;

	cout << "Line 7: The sum of the first " << N
		<< " positive integers is " << sum 
		<< endl;

	return 0;
}
