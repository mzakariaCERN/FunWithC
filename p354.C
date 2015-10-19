#include <iostream>

using namespace std;

void funcValueParam(int num);

int main()
{
	int number = 6;

	cout << "Line 2: Before calling the function "
		<< "funcValueParam, number = " << number 
		<< endl;

	funcValueParam(number);
	
	cout << "Line 4: After calling the function "
		<< "funcValueParam, number = " << number << "\n";

	return 0;
}

void funcValueParam(int num)
{
	cout << "Line 5: In the function funcValue Param, "
		<< "beforechanging, num = " << num
		<< endl;	

	num = 15;

	cout << "Line 7: In the function funcValueParam, "
		<< "after changing, num = " << num 
		<< endl;
}
 
