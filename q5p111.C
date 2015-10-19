/*
 * =====================================================================================
 *
 *       Filename:  q5p111.C
 *
 *    Description:  An answer to Q2, Page 111 in Malik's book
 *
 *        Version:  1.0
 *        Created:  09/18/2012 07:28:56 PM
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
// This program will ask for two decimal inputs: the length and the wedth and it will
// output the area and the perimeter of the rectanlge. 

double Length, Width;
double Area, Parameter;

cout << "Hello! Please enter the Lenght and Width of the rectangele then press Enter:" << endl;

cin >> Length;
cin >> Width; 

cout << "The entered Length was: " << Length << endl;
cout << "The entered Width was: " << Width << endl;

Area = Length * Width;
Parameter = 2*(Length + Width);

cout << "The Area is: " << Area << " and the Parameter is: " << Parameter << endl;
return 0;
}



