/*
 * =====================================================================================
 *
 *       Filename:  p606q3.C
 *
 *    Description:  My attempt to solve Q3 CH10 P606 from Malik
 *
 *        Version:  1.0
 *        Created:  11/02/2012 08:23:25 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Mohammed Zakaria (), m.k.zakaria@gmail.com
 *   Organization:  
 *  The trick with this code is to use sequential search (P555) to find the element first then
 *  to copy the remaining elements to a new array
 * =====================================================================================
 */
#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int seqSearch( const int list[], int listLength, int searchItem);
void remove(const int list[], int FinalList[], int index);

int main()
{
	int intList[ARRAY_SIZE];
	int FinalList[ARRAY_SIZE -1];
	int number;
	int index;
	int j;
  int removeItem;

	cout << "Line 4: Enter " << ARRAY_SIZE
		<< " integers." << endl;

	for (index = 0; index < ARRAY_SIZE; index++)
		cin >> intList[index];

	cout << endl;

	cout << "Line 8: Enter the number to be "
		<< "searched: ";
	cin >> number;
  removeItem = number;
	cout << endl;

	index = seqSearch(intList, ARRAY_SIZE, number);

	if (index != -1)
		cout << "Line 13: "<< number
			<< " is found at position " << index
			<< endl;
	else
		cout << "Line 15: "<< number
			<< " is not in the list. " << endl;


	
	remove(intList,  FinalList, removeItem);

	cout << "checking output" << endl;

	for( j = 0; j <  ARRAY_SIZE - 1   ; j++ )
	    cout << "Element " << j << " = " <<  FinalList[j] << endl;
	return 0;

}

int seqSearch(const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;
	
	for (loc = 0; loc < listLength; loc++)
		if (list[loc] == searchItem)
		{
			found = true;
			break;
		}
	if (found)
		return loc;
	else
		return -1;
}
void remove(const int list[], int FinalList[], int removeItem)
{
    int i;
cout << "entering remove function" << endl;

    for(i = 0; i < ARRAY_SIZE ; i++ )
    {	if( list[i] < removeItem)
	    FinalList[i] = list[i]; 
	    else if (list[i] > removeItem)
		FinalList[i-1] = list[i];
    }


}
