//#include "Time3.h"
//
//
//Time::Time()
//{
//	hours = min = sec = 0;
//}
//
//void Time::setTime(int h, int m, int s)
//{
//	hours = h;
//	min = m;
//	sec = s;
//}
//
//void Time::printUniversal()
//{
//	cout << fixed << right;
//	cout.fill('0');
//	cout << "Universal Time is :    ";
//	cout << setw(2) << hours << " : " << setw(2) << min << " : " << setw(2) << sec << endl;
//
//}
//
//void Time::printstandard()
//{
//
//	cout.fill('0');
//	cout << fixed << right;
//	if (hours >= 0 && hours < 12)
//	{
//		cout << "Standard Time is :    ";
//		cout << setw(2) << hours << " : " << setw(2) << min << " : " << setw(2) << sec << " AM\n";
//	}
//	else
//	{
//		cout << "Standard Time is :    ";
//		cout << setw(2) << (hours - 12) << " : " << setw(2) << min << " : " << setw(2) << sec << " PM\n";
//	}
//}
//
//void Time::updateTime(Time & t1)
//{
//	int incSec;
//	cout << "Enter seconds to increment in time: ";
//	cin >> incSec;
//	for (int i = 0; i <= incSec; i++)
//	{
//		sec++;
//		if (sec == 60)
//		{
//			sec = 0;
//			min++;
//			if (min == 60)
//			{
//				min = 0;
//				hours++;
//				if (hours == 24)
//				{
//					hours = 0;
//				}
//			}
//		}
//
//		t1.printUniversal();
//		t1.printstandard();
//	}
//}