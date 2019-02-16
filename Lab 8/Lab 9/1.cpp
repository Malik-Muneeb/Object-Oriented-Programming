#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream write;
	write.open("Random.txt");
	if (!write)
		cout << "Error opening file...\n";
	for (int i = 1; i < 10000; i++)
		write << i << " ";
	write.close();
	ifstream read;
	read.open("Random.txt");
	if (!read)
		cout << "Error opening file...\n";
	int num[10000];
	long int sum = 0;
	for (int i = 0; i < 10000; i++)
	{
		read >> num[i + 1];
		sum = sum + num[i + 1];
	}
	int avg;
	avg = sum / 10000.0;
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << avg << endl;
	system("pause");
	return 0;
}
