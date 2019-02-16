// Specification file for the Time class
#ifndef TIME_H
#define TIME_H
#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
protected:
	int hour;
	int min;
	int sec;
public:
	// Default constructor
	Time()	{ hour = 0; min = 0; sec = 0; }
	// Constructor
	Time(int h, int m, int s)	{ hour = h; min = m; sec = s; }
	// Accessor functions
	int getHour() const	{ return hour; }
	int getMin() const	{ return min; }
	int getSec() const	{ return sec; }
	void showTime()	
	{
		cout.fill(0);
		cout << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << sec;
	}
};
#endif
