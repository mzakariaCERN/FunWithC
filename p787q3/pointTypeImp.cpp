/*
 * =====================================================================================
 *
 *       Filename:  pointTypeImp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2014 08:25:34 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "pointType.h"
#include <iostream>

using namespace std;

void pointType::setCoordinates(double x, double y)
{
  X = x;
  Y = y;
}

void pointType::printCoordinates() const
{   cout << endl;
    cout << "xCoordinate = " << X << " yCoordinate = " << Y << endl;
    cout << endl;
}

double pointType::getXcoordinate() const
{
  return X;
}

double pointType::getYcoordinate() const
{
  return Y;
}

pointType::pointType(double x, double y)
{
    X = x;
    Y = y;
 
}

