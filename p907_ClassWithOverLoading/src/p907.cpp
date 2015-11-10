//============================================================================
// Name        : p907.cpp
// Author      : MZakaria
// Version     :
// Copyright   : None Whatsoever
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "newClock.h"

using namespace std;

int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	clockType myClock(5, 6, 23);
	clockType yourClock;

	cout << "Line 3: myClock = " << myClock << endl;
	cout << "Line 4: yourClock = " << yourClock << endl;
	cout << "Line 5: Enter the time in the form hr:min:sec ";
	cin >> myClock;
	cout << endl;

	cout << "Line 8: The new time of myClock = " << myClock << endl;
	++myClock;

	cout << "Line 10: After incrementing the time, " << "myClock = " << myClock << endl;

	yourClock.setTime(13, 35, 38);

	cout << "Line 12: After setting the time, " << "yourClock = " << yourClock << endl;

	if (myClock == yourClock)
		cout << "Line 14: The times of myClock and " << "yourClock are equal." << endl;
	else
		cout << "Line 16: The times of myClock and " << "yourClock are not equal." << endl;

	if (myClock <= yourClock)
		cout << "Line 18: The time of myClock is less than or equal to " << endl
		<< "the time of yourClock." << endl;
	else
		cout << "Line 20: The time of myClock is greater than the time of yourClock." << endl;

	return 0;
}
