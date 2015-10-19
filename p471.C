//This is my solution for problem 5, page 471 in Malik.
#include <iostream>
using namespace std;

int main()
{
int m, n, a, b, c;
cout << "Enter two positive intergers(they must not be equal)" << endl;
cin >> m >> n;
if (n > m)
{	c = m;
	m = n;
	n = c;
}

cout << "you have entered: " << m <<" &: "<<n<< endl;
a = (m*m)-(n*n);
b = 2*m*n;
c = (m*m) + (n*n);

cout << "The Pythagorean tiplet is: "<<a<<":"<<b<<":"<<c<< endl;

return 0;
}

