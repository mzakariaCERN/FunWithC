/*
 * p907Imp.cpp
 *
 *  Created on: Sep 16, 2014
 *      Author: mzakaria2
 */

#include <iostream>
#include "newClock.h"

using namespace std;

clockType clockType::operator++()
		{
	sec++;

	if (sec > 59)
	{
		sec = 0;
		min++;

		if(min > 59)
		{
			min = 0;
			hr++;

			if(hr > 23)
				hr = 0;
		}
	}

	return *this;
		}

bool clockType::operator== (const clockType& otherClock) const
		{
	return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
		}

bool clockType::operator<=(const clockType& otherClock) const
		{
			return ((hr < otherClock.hr) || (hr == otherClock.hr && min < otherClock.min) || (hr ==
					otherClock.hr && min == otherClock.min && sec <= otherClock.sec));
		}

bool clockType::operator!=(const clockType& otherClock) const
		{
	return (hr != otherClock.hr || min != otherClock.min || sec != otherClock.sec);
		}

bool clockType::operator< (const clockType& otherClock) const
{
	return ((hr < otherClock.hr) || (hr == otherClock.hr && min < otherClock.min) ||
			(hr == otherClock.hr && min == otherClock.min && sec < otherClock.sec));
}

bool clockType::operator>= (const clockType& otherClock) const
		{
	return ((hr > otherClock.hr) || (hr == otherClock.hr && min > otherClock.min) ||
			(hr == otherClock.hr && min == otherClock.min && sec >= otherClock.sec));
		}

bool clockType::operator> (const clockType& otherClock) const
		{
	return ((hr > otherClock.hr) || (hr == otherClock.hr && min > otherClock.min) ||
			(hr == otherClock.hr && min == otherClock.min && sec > otherClock.sec));
		}

void clockType::setTime (int hours, int minutes, int seconds)
{
	if (0 <= hours && hours < 24)
		hr = hours;
	else
		hr = 0;

	if (0 <= minutes && minutes < 60)
		min = minutes;
	else
		min = 0;

	if (0 <= seconds && seconds < 60)
		sec = seconds;
	else
		sec = 0;
}

void clockType::getTime (int& hours, int& minutes, int& seconds) const
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

clockType::clockType(int hours, int minutes, int seconds)
{
	setTime(hours, minutes, seconds);
}

ostream& operator<< (ostream& osObject, const clockType& timeOut)
{
	if (timeOut.hr < 10)
		osObject << '0';
	osObject << timeOut.hr << ':';

	if (timeOut.min < 10)
			osObject << '0';
		osObject << timeOut.min << ':';

		if (timeOut.sec < 10)
				osObject << '0';
			osObject << timeOut.sec;

			return osObject;
}

istream& operator>> (istream& isObject, clockType& timeIn)
{
	char ch;

	isObject >> timeIn.hr;
	isObject.get(ch);
	isObject >> timeIn.min;
	isObject.get(ch);
	isObject >> timeIn.sec;

	return isObject;
}
