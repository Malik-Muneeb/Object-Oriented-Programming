//#include "Date4.h"
//
//void Date::setDate(int d, int m, int y)
//{
//	day = d;
//	month = m;
//	year = y;
//}
//
//void Date::updateDate()
//{
//	int inc;
//	cout << "Now enter number of days to increment in date: ";
//	cin >> inc;
//	for (int i = 1; i <= inc; i++)
//	{
//		day++;
//		if (year % 4 == 0 && day == 30 && month == 2)
//		{
//			day = 1;
//			month++;
//		}
//		else if (year % 4 != 0 && day == 29 && month == 2)
//		{
//			day = 1;
//			month++;
//		}
//		else if (day == 32 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
//		{
//			day = 1;
//			month++;
//		}
//		else if (day == 31 && (month == 4 || month == 6 || month == 9 || month == 11))
//		{
//			day = 1;
//			month++;
//		}
//
//		if (month == 13)
//		{
//			month = 1;
//			year++;
//		}
//	}
//}
//
//void Date::printDate()
//{
//	cout.fill('0');
//	cout << setw(2) << day << "/" << setw(2) << month << "/" << setw(2) << year << endl;
//}
