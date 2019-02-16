//#include"budget.h"
//
//double Budget::corpBudget = 0;
//
//int main()
//{
//	const int totaldiv = 4;
//	Budget div[totaldiv];
//
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "enter budget request of division " << i + 1 << " : ";
//		double amount;
//		cin >> amount;
//		div[i].addBudget(amount);
//	}
//
//	cout << "\n\nyou entered following budget requests...\n";
//	for (int i = 0; i < 4; i++)
//	{
//		cout << "division # " << i+1<< " : " << div[i].getDivBudget() << endl;
//	}
//
//	cout << "\n\ntotal budget requests: " << div[0].getCorpBudget()<<endl;
//	system("pause");
//	return 0;
//}