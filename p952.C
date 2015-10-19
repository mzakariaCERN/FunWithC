#include <iostream>

using namespace std;

int main()
{
	int dividend, divisor, quotient;

	cout << "Line 2: Enter the dividend: ";
	cin >> dividend;
	cout << endl;

	cout << "Line 5: Enter the divisor: ";
	cin >> divisor;
	cout << endl;

	if (divisor != 0 )
	{
		quotient = dividend / divisor;
		cout << "Line 10: Quotient = " << quotient 
			<< endl;
	}

	else 
		cout << "Line 22: Cannot divide by zero. "
			<< endl;

	return 0;
}


