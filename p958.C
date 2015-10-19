#include <iostream>

using namespace std;

int main()
{

int dividend, divisor, quotient;

try
{
	cout << "Line 3: Enter the dividend: ";
	cin >> dividend;
	cout << endl;

	cout << "Line 6: Enter the divisor: ";
	cin >> divisor;
	cout << endl;

	if (divisor == 0)
		throw divisor;

	quotient = dividend / divisor;

	cout << "Line 12: Quotient = " << quotient << endl; 	
}

	catch (int x)
	{
		cout << "Line 14: Division by " << x  << endl;

	}	
	return 0;
}

