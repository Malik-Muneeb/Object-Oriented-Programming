//#include"DateTime.h"
//
//int main()
//{
//	int d, m, y;
//	cout << "\t\t\t\n\n\nDate Input\n";
//	cout << "Enter Day:	";
//	cin >> d;
//	while (d < 1 || d>31)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> d;
//	}
//	cout << "Enter Month:	";
//	cin >> m;
//	while (m < 1 || m>12)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> m;
//	}
//	cout << "Enter Year:	";
//	cin >> y;
//	while (y < 1)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> y;
//	}
//
//	int h, min, s;
//	cout << "\t\t\t\n\n\nTime Input\n";
//	cout << "Enter hour:	";
//	cin >> h;
//	while (h < 0 || h>23)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> h;
//	}
//	cout << "Enter Minute:	";
//	cin >> min;
//	while (min < 0 || min>59)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> min;
//	}
//	cout << "Enter Second:	";
//	cin >> s;
//	while (s < 0 || s>59)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> s;
//	}
//	DateTime dt(d, m, y, h, min, s);
//	cout << "\n\n\n";
//	dt.showDateTime();
//	cout << endl;
//	system("pause");
//	return 0;
//}