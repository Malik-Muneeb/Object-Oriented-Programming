//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//
//void arrayToFile(string name, int *num, int s)
//{
//	ofstream write(name.c_str(), ios::binary);
//	if (!write)
//	{
//		cout << "Enter opening File...\n";
//		exit(0);
//	}
//	for (int i = 0; i < s; i++)
//		write << num[i] << " ";
//	write.close();
//}
//
//void fileToArray(string name, int *num, int s)
//{
//	ifstream read(name.c_str(), ios::binary);
//	if (!read)
//	{
//		cout << "Enter opening File...\n";
//		exit(0);
//	}
//	cout << "File's Data:\n";
//	for (int i = 0; i < s; i++)
//	{
//		read >> num[i];
//		cout << num[i] << " ";
//	}
//	read.close();
//}
//
//int main()
//{
//	int size;
//	cout << "Enter size of an array: ";
//	cin >> size;
//	int *numArray = new int[size];
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter " << i + 1 << " number: ";
//		cin >> numArray[i];
//	}
//	cout << "Enter name of file to store data: ";
//	string name;
//	cin.ignore();
//	getline(cin, name);
//	arrayToFile(name, numArray, size);
//	cout << "Enter name of file to read data: ";
//	string name1;
//	getline(cin, name1);
//	fileToArray(name1, numArray, size);
//	system("pause");
//	return 0;
//}
