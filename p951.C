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

	quotient = dividend / divisor;
	cout << "Line 9: Quotient = " << quotient << endl;

	return 0;
}


