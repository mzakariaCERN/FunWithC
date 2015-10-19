#include <iostream>

using namespace std;

int seqOrderedSearch( const int list[], int listLength, int searchItem);

void selectionSort(int list[], int length);
int main()

{
	int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	int i, length;
	int searchItem;

	cout << "enter the value of found:" << endl;
	cin >> searchItem; 
	cout << endl;

	selectionSort(list, 10);
	cout << "After sorting, the list elements are: "
		<< endl;
	for ( i = 0; i < 10; i++)
		cout << list[i] << " ";

	cout << endl;
	length = 10;
	cout << "out put of the Sorting function:"
		<< seqOrderedSearch( list,  length,  searchItem) << endl;

	return 0;
}

void selectionSort( int list[], int length)
{
	int index;
	int smallestIndex;
	int minIndex;
	int temp;

	for (index = 0; index < length - 1; index++)
	{
		smallestIndex = index;
		
		 for (minIndex = index + 1; minIndex < length; minIndex++)
			if (list[minIndex] < list[smallestIndex])
				smallestIndex = minIndex;

		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}
}



int seqOrderedSearch( const int list[], int listLength, int searchItem)
{
	int loc;
	bool found = false;

cout << "search Item in the function: "<< searchItem << endl;	
	for (loc = 0; loc < listLength; loc++)
		if (list[loc] >= searchItem)
		{
			found = true;
			break;
		}
	if (found)
		if (list[loc] == searchItem)
			{
			cout << "loc in the function is: "<< loc<< endl;
			return loc;

			}
		else
			return -1;
	else 
		return -1;
}
