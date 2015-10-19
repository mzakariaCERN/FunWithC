#include <iostream>
#include <cassert>

using namespace std;

int main()
{
	int dividend, divisor, quotient;

	cout << "Line 2: Enter the dividend: ";
	cin >> dividend;
	cout << endl;

	cout << "Line 5: Enter the diviaor: ";
	cin >> divisor;
	cout << endl;

	assert(divisor != 0);
	quotient = dividend / divisor;
	cout << "Line 10: Quotient = " << quotient << endl;

	return 0;


}
