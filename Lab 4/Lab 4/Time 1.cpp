//#include"Time1.h"
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
//	cout << fixed << right ;
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
//		cout << setw(2) << (hours-12) << " : " << setw(2) << min << " : " << setw(2) << sec << " PM\n";
//
//	}
//}
