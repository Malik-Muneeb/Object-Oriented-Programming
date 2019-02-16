#ifndef MONTH_H
#define MONTH_H

#include<iostream>
#include<string>
using namespace std;

//char monthName[12][30] = { "January", "Febraury", "March", "April", "May", "June", "July", "August", "September","October", "November", "December" };
//string monthName[12] = { "January", "Febraury", "March", "April", "May", "June", "July", "August", "September","October", "November", "December" };

class Month
{
	string monthName[12] = { "January", "Febraury", "March", "April", "May", "June", "July", "August", "September","October", "November", "December" };
	string name;
	int monthNum;
public:
	Month();
	Month(string);
	Month(int);
	void setMonth(int);
	string getMonth();
	void setMonthNum(int);
	int getMonthNum();
	Month operator++();
	Month operator++(int);
	Month operator--();
	Month operator--(int);
};


#endif 

