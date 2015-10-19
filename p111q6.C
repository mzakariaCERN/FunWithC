/*
 * =====================================================================================
 *
 *       Filename:  p111q6.C
 *
 *    Description:  This is a solution of Q6 P 111, Malik's book
 *
 *        Version:  1.0
 *        Created:  07/22/2014 04:49:35 AM
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

using namespace std;

int main()
{
  double x1 = 0.0, x2 = 0.0, x3 = 0.0, x4 = 0.0, x5 = 0.0 , sum = 0.0, average = 0.0;
  cout << "Enter five decimel number." << endl;
  cin >> x1 >> x2 >> x3 >> x4 >> x5;
  average = (x1 + x2 + x3 + x4 + x5) /5;
  cout << "The average is: " << average << endl; 
return 0;
}
