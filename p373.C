#include <iostream> 

using namespace std;

int t;
	
void funOne(int& a, int& x);

int main()
{
	int num1, num2;
	
	num1 = 10;
	num2 = 20;
	t = 15;

	cout << "Line 4: In main: num1 = " << num1
		<< ", num2 = " << num2 << ", and t = "
		<< t << endl;
	funOne(num1, t);
	cout << "Line 6: In main after funOne: "
		<< "num1 = " << num1 << ", num2 = "
		<< num2  << ", and t = " << t
		<< endl;

	return 0;
}

void funOne(int& a, int& x)
{
	int z;	
	z = a + x;

	cout << "Line 9: In funOne: a = " << a 
		<< ", x = " << x << ", z = " << z
		<< ", and t = " << t << endl;

	x = x + 5;
	cout << " Line 11: in funOne: a = " << a 
		<< ", x = " << x << ", z = " << z 
		<< ", and t = " << t << endl;

	a = a + 12;
	cout << "Line 13: In funOne: a = " << a 
		<< ", x = " << x << ", z = " << z
		<< ", and t = " << t << endl;

	t = t + 13;
	cout << "Line 15: In funOne: a = " << a 
		<< ", x = " << x << ", z = " << z
		<< ", and t = " << t << endl;
}

 
