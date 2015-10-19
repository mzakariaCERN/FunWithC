#include <iostream>

using namespace std;

class divByZero
{};

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
		throw divByZero();

		quotient = dividend / divisor;
		cout << "Line 12: Quotient = " << quotient << endl;
		
	}

	catch (divByZero)
	{
		cout << "Line 14: Division by zero!" << endl;
	}

	return 0;
}
