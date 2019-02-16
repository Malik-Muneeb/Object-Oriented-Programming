// Specification file for the Date class
#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
class Date
{
 protected:
	int day;
	int month;
	int year;
 public:
	// Default constructor
	Date()	{ day = 1; month = 1; year = 1900; }
	 // Constructor
	Date(int d, int m, int y)
	{
		day = d; month = m; year = y;
	}
	void setValue(int d, int m, int y)
	{
		if (d < 1 || d>31)
			throw "ERROR: Invalid Day\n";
		if (m < 1 || m>12)
			throw "ERROR: Invalid Month\n";
		day = d; month = m; year = y;
	}
	 // Accessors
	int getDay() const	{ return day; }
	int getMonth() const	{ return month; }
	int getYear() const	{ return year; }
	void showDate()
	{
		cout << "\n\n\nDate\n";
		cout << day << "/" << month << "/" << year << endl;
	}

};
#endif