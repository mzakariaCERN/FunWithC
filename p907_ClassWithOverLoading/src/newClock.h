/*
 * newClock.h
 *
 *  Created on: Sep 16, 2014
 *      Author: mzakaria2
 */

#ifndef NEWCLOCK_H_
#define NEWCLOCK_H_

#include <iostream>

using namespace std;

class clockType
{
	friend ostream& operator<< (ostream&, const clockType&);
	friend istream& operator>> (istream&, clockType&);

public:
	void setTime(int hours, int minutes, int seconds);
	void getTime(int& hours, int& minutes, int& seconds) const;
	clockType operator++();
	bool operator==(const clockType& otherClock) const;
	bool operator!=(const clockType& otherClock) const;
	bool operator<=(const clockType& otherClock) const;
	bool operator< (const clockType& otherClock) const;
	bool operator>=(const clockType& otherClock) const;
	bool operator> (const clockType& otherclock) const;
	clockType(int hours = 0, int minutes = 0, int seconds = 0);

private:
	int hr;
	int min;
	int sec;


};



#endif /* NEWCLOCK_H_ */
