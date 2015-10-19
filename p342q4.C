#include <iostream>
using namespace std;

int one(int x, int y);
double two(int x, double a);

int main()
{
	int num, x, y;
	double dec;
cout << "Enter two interger numbers, please" << endl;
cin >> x >> y; 
cout << "Numbers entered: " << x << " " << y << endl;

cout << "The output of function one is: " << one(x, y) << endl;
cout << "The output of function two is: " << two(x, y) << endl;

return 0;
}

int one(int t, int y)
{
if(t > y)
	return t+y;
else
	return (t-2)*y;
}

double two(int x, double a)
{
    int first;
    double z;

    cout << "Please enter a number" << endl;
    cin >> z ;
    cout << "z = " << z << endl;
    z = z + a;
    cout << "new z = " << z << endl;
    first = one( 6, 8);
    cout << "first(6, 8) = " << first << endl;
    first = first + x;

    if(z > (2*first))
    {
	return z;
    }
    else
	return 2*(first - z);
}
