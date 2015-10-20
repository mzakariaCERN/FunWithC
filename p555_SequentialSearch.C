#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

int seqSearch( const int list[], int listLength, int searchItem);

int main()
{
	int intList[ARRAY_SIZE];
	int number;
	int index;

	cout << "Line 4: Enter " << ARRAY_SIZE
		<< " integers." << endl;

	for (index = 0; index < ARRAY_SIZE; index++)
		cin >> intList[index];

	cout << endl;

	cout << "Line 8: Enter the number to be "
		<< "searched: ";
	cin >> number;
	cout << endl;

	index = seqSearch(intList, ARRAY_SIZE, number);

	if (index != -1)
		cout << "Line 13: "<< number
			<< " is found at position " << index
			<< endl;
	else
		cout << "Line 15: "<< number
			<< " is not in the list. " << endl;

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
