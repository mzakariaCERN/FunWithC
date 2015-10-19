/*
 * =====================================================================================
 *
 *       Filename:  p544q4.C
 *
 *    Description:  Solution for problem 4, page 544 Malik
 *
 *        Version:  1.0
 *        Created:  07/29/2014 10:23:22 PM
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
#include <iomanip>
#include <cassert>

using namespace std;

void initialize( double list[], int listSize);
void fillArray(  double list[], int listSize);
double sumArray(double list[], int listSize);
double indexMaxElement(const double list[], int listSize);
double indexMinElement(const double list[], int listSize);

int main()
{
int listSize = 8;
double scores[listSize];  // size set by the problem
double MaxScore = 0;
double MinScore = 0;



//cout << "Testing Compiler" << endl;
initialize(scores, listSize); // sets the values of the array to zero.

cout << "Please enter the 8 scores. " << endl;

fillArray( scores, listSize);

MaxScore = indexMaxElement(scores,  listSize);
MinScore = indexMinElement(scores,  listSize);

cout << setprecision(2) << endl;
cout << fixed << endl;

cout << "MaxScore : " << MaxScore << endl;
cout << "MinScore : " << MinScore << endl;
cout << "The full sum: " << sumArray(scores, listSize) << endl;

cout << "The final score is: " << endl;
cout << sumArray(scores, listSize) - MaxScore - MinScore << endl;

  return 0;
}

void initialize(double list[], int listSize)
{
  int count;

  for (count = 0; count < listSize; count++)
    list[count] = 0;
}

void fillArray(double list[], int listSize)
{
  int count;
  
  for (count = 0; count < listSize; count++)
  {
 //   cout << "inside fillArray" << endl;
    cin >> list[count];
    // test if the input is larger than one and less than 10
    if (list[count] < 1.0 || list[count] > 10.00)
    {
cout << "Error!, each score should be between 1 and 10" << endl;
    assert(0);

    }  
  }
}

double sumArray(double list[], int listSize)
{
  int count;
  double sum = 0;

  for(count = 0; count < listSize; count++ )
  {
    sum = sum + list[count];
  }
    return sum;
  
}

double indexMaxElement(const double list[], int listSize)
{
  int count;
  double max = 0;

  for (count = 1; count < listSize; count++)
    if(max < list[count])
      max = list[count];

  return max;

}

double indexMinElement(const double list[], int listSize)
{
  int count;
  double min = 10;

  for (count = 1; count < listSize; count++)
    if(min > list[count])
      min = list[count];

  return min;

}

