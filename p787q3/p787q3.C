/*
 * =====================================================================================
 *
 *       Filename:  p787q3.C
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2014 08:42:30 AM
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

int main()
{
pointType TwoD;
  
cout << "hello from inside main" << endl;

cout << "Before setting the coordinates" << endl;
TwoD.printCoordinates();

cout << "After setting the coordinates" << endl;
TwoD.setCoordinates(14.4, 3.14);
TwoD.printCoordinates();

cout << "Returning X coordinate" << endl;
cout << TwoD.getXcoordinate() << endl;

cout << "Returning Y coordinate" << endl;
cout << TwoD.getYcoordinate() << endl;


return 0;
}

