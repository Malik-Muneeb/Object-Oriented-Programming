#include"Rectangle.h"

int main()
{
	Rectangle rect;
	double len, width;
	cout << "Enter Length: ";
	cin >> len;
	while (len < 0)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "\nWrong Input...Enter Again: ";
		cin >> len;
	}
	cout << "Enter Width: ";
	cin >> width;
	while (width < 0)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "\nWrong Input...Enter Again: ";
		cin >> width;
	}
	rect.setLength(len);
	rect.setWidth(width);
	rect.callFun();
	system("pause");
	return 0;
}