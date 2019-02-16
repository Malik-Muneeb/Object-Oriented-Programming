//#include "Time2.h"
//
//Time :: Time()
//{
//	hours = min = sec = 0;
//}
//
//Time :: Time (int h, int m, int s)
//{
//	setTime(h, m, s);
//}
//
//void Time :: setTime(int h, int m, int s)
//{
//	setHour(h);
//	setMinute(m);
//	setSecond(s);
//}
//
//void Time :: setHour(int h)
//{
//	while (h < 0 || h > 23)
//	{
//		cout << "Enter hours again in universal format: ";
//		cin >> h;
//	}
//	hours = h;
//}
//
//void Time :: setMinute(int m)
//{
//	while (m < 0 || m > 60)
//	{
//		cout << "Enter Minutes again in universal format: ";
//		cin >> m;
//	}
//	min = m;
//}
//
//void Time :: setSecond(int s)
//{
//	while (s < 0 || s > 60)
//	{
//		cout << "Enter seconds again in universal format: ";
//		cin >> s;
//	}
//	sec = s;
//}
//
//void Time :: printUniversal()
//{
//	cout << "Universal Time is :    ";
//	cout << fixed << right;
//	cout.fill('0');
//	cout << setw(2) << hours << " : ";
//	getMinute();
//	getSecond();
//	cout << endl;
//}
//
//void Time :: printstandard()
//{
//	bool check;
//	cout << "Standard Time is :    ";
//	check=getHour();
//	getMinute();
//	getSecond();
//	if (check==true)
//		cout << "PM\n";
//	else
//		cout << "AM\n";
//}
//
//bool Time::getHour()
//{
//	bool flag = false;
//	cout << fixed << right;
//	cout.fill('0');
//	if (hours >= 0 && hours < 12)
//	{
//		cout << setw(2) << hours << " : ";
//	}
//
//	else
//	{
//		flag = true;
//		cout << setw(2) << (hours-12) << " : ";	
//	}
//	return flag;
//}
//
//void Time :: getMinute()
//{
//	cout << fixed << right;
//	cout.fill('0');
//	cout << setw(2) << min << " : ";
//
//}
//
//void Time::getSecond()
//{
//	cout << fixed << right;
//	cout.fill('0');
//	cout << setw(2) << sec << " ";
//}
