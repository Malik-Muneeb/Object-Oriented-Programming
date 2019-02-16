#ifndef DATETIME_H
#define DATETIME_H
#include"Date.h"
#include"Time.h"
#include<iostream>
using namespace std;


class DateTime:public Date,public Time
{
	
public:
	DateTime()
	{
		day = 1; month = 1; year = 1900;
		hour = 0; min = 0; sec = 0;
		
	}
	DateTime(int d, int m, int y, int h, int min, int s):Date(d,m,y),Time(h,min,s)
	{	
	
	}
	void showDateTime()
	{
		cout << day << "/" << month << "/" << year << "\t";
		cout << hour << ":" << min << ":" << sec;
	}
};

#endif
