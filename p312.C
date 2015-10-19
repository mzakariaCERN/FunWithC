//How to use predefined functions.

#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>

using namespace std;

int main()
{
  int x;
  double u, v;
  cout << "Line 1: Uppercase a is "
       << static_cast<char> (toupper('a'))
       << endl;
  u = 4.2;
  v = 3.0;
  cout << "Line 4: " << u << "to the power of "
       << v << " = " << pow(u,v) << endl;

  cout << "Line 5: 5 to the power of 4 = "
       << pow(5,4) << endl;

  u = u + pow(3,3);
  cout << "Line 7: u = " << u << endl;

  x = -15;
  cout << "Line 9: Absolute value of " << x << " = " << abs(x) << endl;
  
  return 0;
}
