//void testCopyConst(pointerDataClass temp);

#include <iostream>
#include "ptrDataClass.h"

using namespace std;

void testCopyConst(pointerDataClass temp);

int main()
{
	pointerDataClass listOne;
	
	int num;
	int index;

	cout << "Line 4: Enter 5 integers." << endl;

	for (index = 0; index < 5; index++)
	{
		cin >> num;
		listOne.insertAt(index, num);
	}
	
	cout << "Line 8: listOne: ";
	listOne.print();
	cout << endl;

	pointerDataClass listTwo(listOne);

	cout << "Line 12: listTwo: ";
	listTwo.print();
	cout << endl;

	listTwo.insertAt(5, 34);
	listTwo.insertAt(2, -76);

	cout << "Line 17: After modifying listTwo: ";
	listTwo.print();
	cout << endl;

	cout << "Line 20: After modifying listTwo, "
		<< "listOne: ";
	listOne.print();
	cout << endl;	

	cout << "Line 23: Calling the function testCopyConst" << endl;

	testCopyConst(listOne);

	cout << "Line 25: After a call to the function "
		<< "testCopyConst, " << endl
		<< "	listOne is: ";
	listOne.print();
	cout << endl;
	
	return 0;
}

void testCopyConst(pointerDataClass temp)
{
	cout << "Line 29: *** Inside the function "
		<< "testCopyConst ***" << endl;

	cout << "Line 30: Object temp data: ";
	temp.print();
	cout << endl;

	temp.insertAt(3, -100);
	cout << "Line 34: After changing temp: ";
	temp.print();
	cout << endl;

	cout << "Line 37: *** Exiting the function "
		<< "testCopyConst ***" << endl;
}
