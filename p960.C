#include <iostream>
#include <string>

using namespace std;

int main()
{

	int dividend, divisor = 1, quotient;

	string inpStr = "The input stream is in the fail state.";

	try 
	{
		cout << "Line 4: Enter the dividend: ";
		cin >> dividend;
		cout << endl;

		cout << "Line 7: Enter the divisor: ";
		cin >> divisor;
		cout << endl;
      		if (!cin)
			throw inpStr;

		if (divisor == 0)
			throw divisor;
		else if (divisor < 0)
			throw string("Negative divisor.");
		
		quotient = dividend / divisor;

		cout << "Line 17: Quotient = " << quotient << endl;
	}

	catch (int x)
	{
		cout << "Line 19: Division by " << x  << endl;
	}
	
	catch(string s)
	{
		cout << "Line 21: " << s << endl;
	}
	
	return 0;

}
