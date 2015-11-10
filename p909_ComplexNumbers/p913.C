/*
 * =====================================================================================
 *
 *       Filename:  p913.C
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/19/2012 10:29:55 AM
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
#include "complexType.h"

using namespace std;

int main()
{
    complexType num1(23, 34);
    complexType num2;
    complexType num3;

    cout << "Line 4: Num1 = " << num1 << endl;
    cout << "Line 5: Num2 = " << num2 << endl;

    cout << "Line 6: Enter the complex number " 
	<< "in the form (a, b) ";
    cin >> num2;
    cout << endl;

    cout << "Line 9: New value of num2 = " 
	<< num2 << endl;

    num3 = num2 + num1;

    cout << "Line 11: Num3 = " << num3 << endl;

    cout << "Line 12: " << num1 << " + " << num2
	<< " = " << num1 + num2 << endl;

    cout << "Line 13: " << num1 << " * " << num2 
	<< " = " << num1 * num2 << endl;

    return 0;
    
}
