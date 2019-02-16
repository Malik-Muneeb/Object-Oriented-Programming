//#include"Budget2.h"
//
//double Budget::corpBudget = 0;
//void Budget::mainOffice(double amt)
//{
//	corpBudget += amt;
//}
//
//int main()
//{
//	cout << "Enter Budget request for main office : ";
//	double budget;
//	cin >> budget;
//	Budget::mainOffice(budget);
//
//	const int totalDiv = 4;
//	Budget div[totalDiv];
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Enter Budget Request of Division " << i + 1 << " : ";
//		double amount;
//		cin >> amount;
//		div[i].addBudget(amount);
//	}
//
//	cout << "\n\nYou entered following Budget requests...\n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "Division # " << i+1<< " : " << div[i].getDivBudget() << endl;
//	}
//
//	cout << "\n\nTotal Budget requests: " << div[0].getCorpBudget()<<endl;
//	system("pause");
//	return 0;
//}