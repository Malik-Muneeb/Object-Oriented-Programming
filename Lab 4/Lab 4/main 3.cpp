//#include "Time3.h"
//
//int main()
//{
//	Time t1;
//	int h, m, s;
//	cout << "Enter Time in Universal format (eg.  13:30.07 )\n\n";
//	cout << "Enter Hours: ";
//	cin >> h;
//	while (h < 0 || h > 24)
//	{
//		cout << "Enter Hours again in universal format: ";
//		cin >> h;
//	}
//	cout << "Enter Minutes: ";
//	cin >> m;
//	while (m < 0 || m > 60)
//	{
//		cout << "Enter Minutes again in universal format: ";
//		cin >> m;
//	}
//	cout << "Enter Seconds: ";
//	cin >> s;
//	while (s < 0 || s > 60)
//	{
//		cout << "Enter seconds again in universal format: ";
//		cin >> s;
//	}
//
//	t1.setTime(h, m, s);
//	t1.updateTime(t1);
//	system("pause");
//	return 0;
//}