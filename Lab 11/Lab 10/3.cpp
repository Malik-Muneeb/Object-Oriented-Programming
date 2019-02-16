//#include<iostream>
//#include<fstream>
//using namespace std;
//
//int main()
//{
//	float annualInterest, startBal, noOfMonths;
//	cout << "Enter annual interest rate: ";
//	cin >> annualInterest;
//	float monthlyInterest = annualInterest / 12.0;
//	cout << "Enter starting balance: ";
//	cin >> startBal;
//	cout << "Number of months: ";
//	cin >> noOfMonths;
//	float deposit, withdraw, tDeposit = 0,
//		tWithdraw = 0, tInterest = 0, interest = 0;
//	for (int i = 0; i < noOfMonths; i++)
//	{
//		cout << "\n\nMonth: " << i + 1 << "\n\n";
//		cout << "Enter amount to deposit: ";
//		cin >> deposit;
//		while (deposit < 0)
//		{
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "You cant deposit negative amount !!!";
//			cout << "Enter again: ";
//			cin >> deposit;
//		}
//		startBal += deposit;
//		tDeposit += deposit;
//		cout << "Enter amount to withdraw: ";
//		cin >> withdraw;
//		while (withdraw < 0)
//		{
//			cin.clear();
//			cin.ignore(100, '\n');
//			cout << "You cant withdraw negative amount !!!";
//			cout << "Enter again: ";
//			cin >> withdraw;
//		}
//		startBal -= withdraw;
//		tWithdraw += withdraw;
//		interest = interest*monthlyInterest;
//		startBal += interest;
//		tInterest += interest;
//	}
//	cout << "Ending balance: " << startBal << endl;
//	cout << "Total amount of deposit: " << tDeposit << endl;
//	cout << "Total amount of withdraw: " << tWithdraw << endl;
//	cout << "Total interest rate: " << tInterest << endl;
//	ofstream write;
//	write.open("Final Report.txt");
//	write << "Ending balance: " << startBal << endl;
//	write << "Total amount of deposit: " << tDeposit << endl;
//	write << "Total amount of withdraw: " << tWithdraw << endl;
//	write << "Total interest rate: " << tInterest << endl;
//	write.close();
//	system("pause");
//	return 0;
//}