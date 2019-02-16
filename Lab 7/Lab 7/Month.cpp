#include"Month.h"

Month::Month()
{
	monthNum = 1;
	name = "January";
}
Month::Month(string n)
{
	name = n;
	for (int i = 0; i < 12; i++)
	{
		if (monthName[i] == name)
			monthNum = i + 1;
	}
	//cout << "month number: " << monthNum << endl;
}
Month::Month(int x)
{
	monthNum = x;
	name = monthName[monthNum - 1];
	//cout << "name :  " << name << endl;
}
void Month::setMonth(int x)
{
	name = monthName[x-1];
}
string Month::getMonth()
{
	return monthName[monthNum - 1];
}
void Month::setMonthNum(int x)
{
	monthNum = x;
}
int Month::getMonthNum()
{
	return monthNum;
}
Month Month:: operator++()
{
	monthNum++;
	if (monthNum == 12)
		monthNum = 1;
	setMonth(monthNum);
	return *this;
}
Month Month:: operator++(int)
{
	setMonth(monthNum);
	Month x = *this;
	monthNum++;
	if (monthNum == 12)
		monthNum = 1;
	return x;
}
Month Month:: operator--()
{
	monthNum--;
	if (monthNum == 0)
		monthNum = 12;
	setMonth(monthNum);
	return *this;
}
Month Month:: operator--(int)
{
	setMonth(monthNum);
	Month x = *this;
	monthNum--;
	if (monthNum == 0)
		monthNum = 12;
	return x;
}