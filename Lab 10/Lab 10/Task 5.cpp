//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
//
//struct division
//{
//	string name;
//	double quater[4];
//};
//
//double TotalCoSalesQuarter(int j, division *div);
//double TotalYearlyDivision(int j, division *div);
//
//int main()
//{
//	division div[4];
//	ifstream read("Divisions.txt");
//	int i = 0, j;
//	while (!read.fail() && i < 4)
//	{
//		read >> div[i].name;
//		cout << div[i].name << endl;
//		for (j = 0; j < 4; j++)
//		{
//			read >> div[i].quater[j];
//			//cout << div[i].quater[j]<<endl;
//		}
//		i++;
//	}
//	cout << "\n\n\n";
//	double totalCo[4];
//	for (int i = 0; i < 4; i++)
//		totalCo[i] = TotalCoSalesQuarter(i, div);
//	cout << "\n\n\n";
//	double division[4];
//	for (int i = 0; i < 4; i++)
//		TotalYearlyDivision(i, div);
//	double yearlySale = 0.0;
//	for (int i = 0; i < 4; i++)
//		yearlySale += totalCo[i];
//	cout << "\n\n\nTotal yearly corporate sale: " << yearlySale << endl;
//	system("pause");
//	return 0;
//}
//
//double TotalCoSalesQuarter(int j, division *div)
//{
//	double totalCoSale = 0.0;
//	for (int i = 0; i < 4; i++)
//	{
//		cout << div[i].quater[j] << endl;
//		totalCoSale = totalCoSale + div[i].quater[j];
//	}
//		
//	cout << "Total corporate sales for quarter " << j + 1 << " : " << totalCoSale << endl;
//	return totalCoSale;
//}
//
//double TotalYearlyDivision(int j, division *div)
//{
//	double total = 0.0;
//	for (int i = 0; i < 4; i++)
//		total += div[j].quater[i];
//	cout << "Total yearly corporate sales: " << total << endl;
//	return total;
//}