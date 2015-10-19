#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape(int& a, int& b, int& c);

int main()
{
int a, b, c, d;
int e;
triangleType aa; 
	cout << "Provide 3 numbers representing each side"
		<< endl;
	cin >> a;
	cin >> b;
	cin >> c;

	cout << "you gave " << a << " " << b << " " << c << endl;

if (b > a )
{
	d = a;
	a = b;
	b = d; 
}
d = 0; 

if ( c > b )
{
	d = b;
	b = c;
	c = d;
}

d = 0;

if (b > a )
{
	d = a;
	a = b;
	b = d; 
}

	cout << "after arrangement " << a <<" "<< b << " " << c << endl;

//if ( b + c <= a )
//	Type = noTriangle; 
//else if ( (a == b) && (a == c))
//	Type = equilateral;

//else if ( (a == b) || (a == c) || (b == c) )
//	Type = isosceles;
//else 
//	Type = scalene; 
///triangleShape(a, b, c); 
// cout << " Type = " << Type << endl;

//printEnum(triangleType Type);

cout << "result: "<<  triangleShape(a, b, c) << endl;
e = triangleShape(a, b, c);
cout << "e = " << e << endl;

switch (e)
	{
	case 3:
	cout << "no triangle"<< endl;
	break;
	
	case 2:
	cout << "equilateral"<< endl;
	break;

	case 1:
	cout << "isosceles"<< endl;
	break;
	
	case 0:
	cout << "scalene"<< endl;
	break;
	}

	
//	}

return 0;
}

triangleType triangleShape(int& a, int& b, int& c)
{
cout << "a, b, and c " << a << " " << b << " " << c << " " << endl;
triangleType Type;
if ( (b + c) <= a )
//	Type = noTriangle; 
	return noTriangle;
else 

if ( (a == b) && (a == c))
//	Type = equilateral;
	return equilateral;
else 
if ( (a == b) || (a == c) || (b == c) )
//	Type = isosceles;
	return isosceles;
else 
//	Type = scalene; 
	return scalene;

//cout << " Type = " << Type << endl; 


return Type;
} 


