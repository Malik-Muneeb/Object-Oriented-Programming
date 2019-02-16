#include"Date.h"
#include<iostream>
using namespace std;

int main()
{
	int d, m, y;
	cout << "Enter Day:	";
	cin >> d;
	cout << "Enter Month:	";
	cin >> m;
	cout << "Enter Year:	";
	cin >> y;
	while (y < 1)
	{
		cout << "Wrong Input...!";
		cout << "\nEnter Again: ";
		cin.clear();
		cin.ignore(100, '\n');
		cin >> y;
	}
	Date da;
	bool check = true;
	while(check)
	{
		try
		{
			da.setValue(d, m, y);
			check = false;
		}
		catch (char *ex)
		{
			cout << ex;
			if (strcmp(ex, "ERROR: Invalid Day\n") == 0)
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Enter Day again: ";
				cin >> d;
			}
			else if (strcmp(ex, "ERROR: Invalid Month\n") == 0)
			{
				cin.clear();
				cin.ignore(100, '\n');
				cout << "Enter Month again: ";
				cin >> m;
			}
		}
	}
	da.showDate();
	system("pause");
	return 0;
}