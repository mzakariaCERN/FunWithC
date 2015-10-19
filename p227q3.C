/*
 * =====================================================================================
 *
 *       Filename:  p227q3.C
 *
 *    Description:  Code to solve problem 3, page 226. Malik's book
 *
 *        Version:  1.0
 *        Created:  07/23/2014 04:18:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <cassert>


using namespace std;

int number;

int main()
{
  cout << "Enter integer between 0 and 35: " << endl;
  cin >> number;
  	
    assert(number >= 0);    /// to make sure the number is in the range specified.
  	assert(number <= 35);

    if(number <= 9)
      cout << "output = " << number << endl;
    else
  //    cout << "for number = " << number << " output = " << static_cast<char>(number) << endl;
      cout << "output = " << static_cast<char>(number+55) << endl;

  return 0;
}

