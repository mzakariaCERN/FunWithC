/*
 * =====================================================================================
 *
 *       Filename:  p129.C
 *
 *    Description:  An Example given in P129 in Malik's book
 *
 *        Version:  1.0
 *        Created:  09/18/2012 08:45:37 PM
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
    char ch;

    cout << "Line 1: Enter a string: ";
    cin.get(ch);
    cout << endl;
    cout << "Line 4: After first cin.get(ch); "
	<< "ch = " << ch << endl;

    cin.get(ch);
    cout << "Line 6: After second cin.get(ch); "
	<< "ch = " << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "Line 9: After putback and then "
	<< "cin.get(ch); ch = " << ch << endl;

    ch = cin.peek();
    cout << "Line 11: After cin.peek(); ch = "
	<< ch << endl;

    cin.get(ch);
    cout << "Line 13: After cin.get(ch); ch = "
	<< ch << endl;

    return 0;
}

