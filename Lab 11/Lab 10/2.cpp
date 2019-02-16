#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int std;
	cout << "Enter number of students (but neither less than 1 nor greater than 25): ";
	cin >> std;
	while (std < 1 || std>25)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "wrong input ! Enter again: ";
		cin >> std;
	}
	string *st=new string [std];
	fstream read;
	read.open("Names.txt", ios::in);
	if (!read)
		cout << "Error opening file...\n";
	for (int i = 0; i < std; i++)
		read >> st[i];
	string min;
	int minIndex;
	for (int index = 0; index < std; index++)
	{
		min = st[index];
		minIndex = index;
		for (int i = index; i < std; i++)
		{
			if (st[i] < min)
			{
				min = st[i];
				minIndex = i;
			}
		}
		string temp=st[index];
		st[index] = min;
		st[minIndex] = temp;
	}
	cout << st[0] << endl;
	cout << st[std];
	system("pause");
	return 0;
}
