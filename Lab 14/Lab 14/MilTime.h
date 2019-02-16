#ifndef MILTIME_H
#define MILTIME_H
#include"Time.h"
#include"MilTime.h"
#include<iostream>
using namespace std;

class MilTime:public Time
{
	int milHours;
	int milSeconds;
public:
	MilTime() { milHours = 100; milSeconds = 0; }
	MilTime(int mH, int mS) 
	{
		milHours = mH; milSeconds = mS;
		setTime(milHours, milSeconds);
	}
	void setTime(int mH, int mS)
	{
		milHours = mH; milSeconds = mS;
		min = milHours % 100;
		if (milHours > 1200)
			hour = (milHours / 100) - 12;
		else
			hour = milHours / 100;
	}
	int getHour() { return milHours; }
	int getStandHr() { return hour; }
};
#endif MILTIME_H
