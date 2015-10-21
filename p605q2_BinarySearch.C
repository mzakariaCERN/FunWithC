#include <iostream> 

using namespace std;
int binarySearch(const int list[], int listLength, int searchItem);
void bubbleSort(int list[], int length);

int main()
{
	int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	int i;
	int searchItem;
	bubbleSort(list, 10);

	cout << "After sorting, the list elements are:"
		<< endl;

	for (i = 0; i < 10; i++)
		cout << list[i] << " ";

	cout << endl;
	
///start the birnary search part
	cout << "enter the item you wish to search for" << endl;
	cin >> searchItem;
	cout << "you asked to search for: "<<searchItem<<endl;
	cout << "The index value for the item we are searching for is: " <<binarySearch(list,10,searchItem) << endl;
	
	return 0;
}

void bubbleSort ( int list[], int length)
{
	int temp;
	int iteration;
	int index;
	for (iteration = 1; iteration < length; iteration++)
	{
		for (index = 0; index < length - iteration; index++)
			if (list[index] > list [index + 1])
			{
				temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
	}
}

int binarySearch(const int list[], int listLength, int searchItem)
{
	int first = 0;
	int last = listLength - 1;
	int mid;

	bool found = false;

	while (first <= last && !found)
	{
		mid = (first + last)/ 2;

		if (list[mid] == searchItem)
			found = true;
		else if (list[mid] > searchItem)
			last = mid - 1;
		else
			first = mid + 1;
	}
	if(found)
		return mid;
	else
		return -1;
}
