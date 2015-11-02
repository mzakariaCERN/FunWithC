/*
 * =====================================================================================
 *
 *       Filename:  pointType.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2014 08:14:08 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef H_pointType
#define H_pointType

class pointType
{
public:
void  setCoordinates(double x, double y);
  // Functions to set coordinates.

void printCoordinates() const;

double getXcoordinate() const;
// Returns the X coordinate

double getYcoordinate() const;

pointType(double x = 0, double  = 0);
//Constructor to set the date

private:
double X;
double Y;

};
#endif


