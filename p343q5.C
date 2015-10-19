/*
 * =====================================================================================
 *
 *       Filename:  p343q5.C
 *
 *    Description:  solution of problem 5, page 343, Malik.
 *
 *        Version:  1.0
 *        Created:  07/23/2014 09:25:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <cmath>
#include <iostream>

using namespace std;

int reverseDigit(int); // this function reverses the digits of a positive function
bool isPositive(int); // this function gives false if the function is not positive

int main()
{
  int number ;
cout << "The skeleton can support a function, captain!" << endl;
cout << "Enter a number: " << endl;
cin >> number;

if ( isPositive(number) == true  ) 
cout << reverseDigit(number) << endl;
else
cout << -1 * reverseDigit(number) << endl;
  
return 0;
}

int reverseDigit(int number)
{ 
  number = abs(number);
  int result = 0, variablePowr = 0;
  cout << "Hi I am reverseDigit, I can see: " << number << endl;
  int pwr = 0;
if (number < 10)
return number;
  else
	while (number / static_cast<int> (pow(10, pwr)) >= 10)
			pwr++;
  int tenTopwr = static_cast<int> (pow(10,pwr));

 	while (variablePowr < pwr+1)
			{
//				        cout << "tenTopwr = " << tenTopwr << endl;
//        cout << "variablePowr = " << variablePowr << endl;
        result = result + ((number/tenTopwr)*pow(10,variablePowr));
//        cout << "result = " << result << endl;
//         number = number - (number/tenTopwr)*pow(10,tenTopwr);
         number =  number - (number/tenTopwr)*tenTopwr;
//         cout << "number = " << number << endl;
        variablePowr++;
        tenTopwr = tenTopwr / 10;
       //        return 0;
      } 
//  cout << "pwr = " << pwr << endl;
  return result;
}

bool isPositive(int number)
{
if (number > 0)
return true;
else 
  return false;

}
