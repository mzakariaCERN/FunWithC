#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std; 

int main()
{
int num, n, m, divider;
cout << "Enter an integer number" << endl;
cin >> num;
cout << "The number eneterd is: " << num << endl;
n = 0;
divider = 1;
while (num / divider)
{
divider = 10*divider; 
n += 1;
}

cout << "number of digits " << n << endl;
 m = 1;
while (num > 0)
{
cout << static_cast<int>(num % static_cast<int>(pow(10,m))) << " " ;
num = num / pow(10,m);
//cout << "num = " << num << endl;


}


return 0;
}
