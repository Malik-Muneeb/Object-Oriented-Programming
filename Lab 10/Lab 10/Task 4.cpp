//#include<iostream>
//#include<fstream>
//using namespace std;
//
//struct division
//{
//	string name;
//	double quater[4];
//	division()
//	{
//		quater[0] = 0.0;
//		quater[1] = 0.0;
//		quater[2] = 0.0;
//		quater[3] = 0.0;
//	}
//	void storedata(ofstream &write)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			cout << "enter sales for quater " << i + 1 << " : ";
//			cin >> quater[i];
//			while (quater[i] < 0)
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//				cout << "wrong input !!! please enter valid value: ";
//				cin >> quater[i];
//			}
//			write << quater[i] << endl;
//		}
//	}
//};
//
//int main()
//{
//	ofstream write("divisions.txt");
//	division div[4];
//	cout << "enter sales figures for east\n";
//	write << "East\n";
//	div[0].storedata(write);
//	cout << "\nenter sales figures for west\n";
//	write << "West\n";
//	div[1].storedata(write);
//	cout << "\nenter sales figures for north\n";
//	write << "North\n";
//	div[2].storedata(write);
//	cout << "\nenter sales figures for south\n";
//	write << "South\n";
//	div[3].storedata(write);
//	write.close();
//	system("pause");
//	return 0;
//}
