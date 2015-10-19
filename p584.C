#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> intList;
	unsigned int i;

	intList.push_back(13);
	intList.push_back(75);	
	intList.push_back(28);
	intList.push_back(35);

	cout << "Line 7: List Elements: ";
	
	for (i = 0; i < intList.size(); i++)
		cout << intList[i] << " ";
	cout << endl;

	for (i = 0; i < intList.size(); i++)
		intList[i] = intList[i] * 2;

	cout << "Line 13: List Elements: ";

	for (i = 0; i < intList.size(); i++)
		cout << intList[i] << " ";

	cout << endl;

	return 0;
}

