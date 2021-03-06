// This code defines a function to bubble sort a lost
// This usually takes n (n - 1) / 2 comparisons and n (n - 1) / 4 assignments 
// For a list of length n


#include <iostream> 

using namespace std;

void bubbleSort(int list[], int length);

int main()
{
	int list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
	int i;

	bubbleSort(list, 10);

	cout << "After sorting, the list elements are:"
		<< endl;

	for (i = 0; i < 10; i++)
		cout << list[i] << " ";

	cout << endl;

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

