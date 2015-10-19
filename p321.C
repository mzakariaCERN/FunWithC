#include <iostream>

using namespace std;

double larger(double x, double y);
double compareThree(double x, double y, double z);

int main()
{
	double one, two;

	cout << "Line 2: The larger of 5 and 10 is "
	<< larger(5, 10) << endl;	

	cout << "Line 3: Enter two numbers: ";
	cin >> one >> two;
	cout << endl;
	
	cout << "Line 6: The larger of " << one << " and "<< two
	<< " is "<< larger(one, two) << endl;

	cout << "Line 7: The largerst of 23, 34, and "
	<< "12 is " << compareThree(23, 34, 12)
	<< endl;
return 0;
}

double larger(double x, double y)
{
	if(x >= y)
	return x;
	else
	return y;
}

double compareThree (double x, double y, double z)
{
	return larger(x, larger(y, z));
}

