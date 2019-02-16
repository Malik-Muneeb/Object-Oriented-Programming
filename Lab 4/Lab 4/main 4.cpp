//#include "Date4.h"
//
//int main()
//{
//	int d, m, y;
//	cout << "Enter Date....\n\n";
//	cout << "Enter day: ";
//	cin >> d;
//	while (d <= 0 || d > 31)
//	{
//		cout << "Wrong !  Enter day again: ";
//		cin >> d;
//	}
//	cout << "Enter month: ";
//	cin >> m;
//	while (m <= 0 || m > 12)
//	{
//		cout << "Wrong !  Enter day again: ";
//		cin >>m;
//	}
//	cout << "Enter year (eg. 1996, 1913, 2013 etc ): ";
//	cin >> y;
//	while (y <= 0)
//	{
//		cout << "Wrong !  Enter day again: ";
//		cin >> y;
//	}
//
//	Date d1;
//	d1.setDate(d, m, y);
//	cout << "you entered this date:   ";
//	d1.printDate();
//	d1.updateDate();
//	cout << "updated Date :";
//	d1.printDate();
//	system("pause");
//	return 0;
//}