//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	ifstream read("Data File.txt");
//	if (!read)
//	{
//		cout << "Error opening Data File.txt\n";
//		exit(0);
//	}
//	ofstream write("Encrypt Data File.txt");
//	if (!write)
//	{
//		cout << "Error opening Data File.txt\n";
//		exit(0);
//	}
//	string st;
//	while (!read.eof())
//	{
//		getline(read,st);
//		cout << st;
//		for (int i = 0; i < st.size(); i++)
//		{
//			st[i] += 10;
//			write << st[i];
//		}
//	}
//	read.close();
//	write.close();
//	system("pause");
//	return 0;
//}
