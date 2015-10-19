//Program: Largest


#include <iostream>

using namespace std;

double larger(double , double );

int main()
{
	double num;
	double max;
	int count;
	
	cout << "Enter 10 numbers." << endl;
	cin >> num;
	max = num;

	for (count = 1; count < 10; count++)
	{
	cin >> num;
	max = larger(max, num);
	}

	cout << "The larger number is " << max
	<< endl;
	
	return 0;
}

double larger(double  x, double  y)
{


	if (x >= y)
		return x;
	else 

		return y;
}
