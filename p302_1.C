// Program: Divisibility test by 3 and 9

#include <iostream> 

using namespace std;

int main()
{
  int num, temp, sum;
	int divider = 10, i ;
  cout << "Enter an integer: ";
  cin >> num;
  cout << endl;
  
 // temp = num;
if (num < 0)
{
num = -1*num; //to make sure it becomes positive.   
}

while (num / divider)
{
divider = 10*divider;
}

divider = divider / 10;
cout << "divider = " << divider << endl;
  sum = 0;

 for (i = divider; i >= 1 ; i = i / 10)
    {
      cout << num / i << " "; 
      sum = sum + (num / i);	 
      num = num % i;

    }
      
 

  cout << "The sum of the digits = " << sum << endl;
  
 
}
