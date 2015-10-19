#include <iostream>

using namespace std;

int funcRet1();
int funcRet2();
int funcRet3();
int funcRet4(int z);

int main()
{
	int num = 4;

	cout << "Line 1: The value returned by funcRet1: "
	<< funcRet1()<<endl;

	cout << "Line 2: The value returned by funcRet2: "
	<< funcRet2() << endl;
	
	cout << "Line 3: The value returned by funcRet3: "
	<< funcRet3() << endl;

	cout << "Line 4: The value returned by funcRet4: "
	<< funcRet4(num) << endl;

	return 0;
}

int funcRet1()
{
	return 23, 45; //only 45 is returned 
}

int funcRet2()
{
	int x = 5;
	int y = 6;
	
	return x, y;
}

int funcRet3()
{
	int x = 5;
	int y = 6;

	return 37, y, 2*x;
}

int funcRet4(int z)
{
	int a = 2;
	int b = 3;

	return 2 * a + b, z + b;
} 

