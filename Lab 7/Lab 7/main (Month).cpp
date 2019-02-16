#include"Month.h"

int main()
{
	Month obj, obj1;
	int monthNum;
	cout << "Enter Number of Month: ";
	cin >> monthNum;
	while (monthNum < 1 || monthNum>12)
	{
		cout << "Error! Enter Month Number again: ";
		cin >> monthNum;
	}
	obj.setMonthNum(monthNum);
	obj.setMonth(monthNum);
	cout << "Name: " << obj.getMonth() << endl;
	cout << "Month Number: " << obj.getMonthNum() << endl;
	obj1 = ++obj;
	cout << "++pre Month: " << obj1.getMonth() << endl;
	obj1 = obj++;
	cout << "post++ Month: " << obj1.getMonth() << endl;
	cout << "Month: " << obj.getMonth() << endl;
	obj1 = --obj;
	cout << "++pre Month: " << obj1.getMonth() << endl;
	obj1 = obj--;
	cout << "post++ Month: " << obj1.getMonth() << endl;
	cout << "Month: " << obj.getMonth() << endl;
	system("pause");
	return 0;
}