	/*
	 * =====================================================================================
     *
     *       Filename:  p226q2.C
     *
     *    Description:  Solution of exercise 2, page 226 in Malik's book
     *
     *        Version:  1.0
     *        Created:  10/04/2012 02:19:56 AM
     *       Revision:  none
     *       Compiler:  gcc
     *
     *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
     *   Organization:  
     *
     * =====================================================================================
     * This code will ask for 3 numbers. And it will output them in ascending order. 
     */
#include <stdlib.h>
#include <iostream>

    using namespace std;

    int main()
    {
	double num1, num2, num3;
	cout << "Please enter 3 numbers:" << endl;
	cin >> num1 >> num2 >> num3; 

	if((num1 > num2) && (num1 > num3))
	    {
	    cout << "The largest number is: " << num1 << endl;
	    if( num2 > num3)
		{
		cout << "The second largest number is: " << num2 << endl;
		cout << "The third largest number is: " << num3 << endl;
		}
	    else
		{
		cout << "The second largest number is: " << num3 << endl;
		cout << "The third largest number is: " << num2 << endl;

		}
	    }
	if((num2 > num1) && (num2 > num3))
	{
	    cout << "The largest number is: " << num2 << endl;
	    if( num1 > num3)
		{
		cout << "The second largest number is: " << num1 << endl;
		cout << "The third largest number is: " << num3 << endl;
		}
	    else
		{
		cout << "The second largest number is: " << num3 << endl;
		cout << "The third largest number is: " << num1 << endl;

		}

	}
	if((num3 > num1) && (num3 > num2))
	{
	    cout << "The largest number is: " << num3 << endl;
	    if( num1 > num2)
		{
		cout << "The second largest number is: " << num1 << endl;
		cout << "The third largest number is: " << num2 << endl;
		}
	    else
		{
		cout << "The second largest number is: " << num2 << endl;
		cout << "The third largest number is: " << num1 << endl;

		}

	}

	

	
	return 0;
    }
