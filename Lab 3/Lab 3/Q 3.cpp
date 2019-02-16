//#include<iostream>
//#include<math.h>
//
//using namespace std;
//
//class payment
//{
//private:
//	double monthlyPayment, loan, rate;
//	double term,  years;
//public:
//	void setLoan(double l)
//	{
//		loan = l;
//	}
//	void setRate(double r)
//	{
//		rate = r;
//	}
//	void setYears(double y)
//	{
//		years = y;
//	}
//	void calcTerm()
//	{
//		term = pow(1 + rate / 12, 12 * years);
//	}
//	double calcPay()
//	{
//		monthlyPayment = (loan*rate / 12 * term) / (term - 1);
//		return monthlyPayment;
//	}
//	double calcTotalPay()
//	{
//
//		return monthlyPayment * 12 * years;
//	}
//};
//
//void validation(double &a)
//{
//	while (a < 0)
//	{
//		cout << "Invalid !!! Enter again: ";
//		cin >> a;
//	}
//}
//int main()
//{
//	payment amount;
//	double l, r , y;
//	cout << "Enter Loan amount: ";
//	cin >> l;
//	validation(l);
//	amount.setLoan(l);
//	cout << "Enter interest rate: ";
//	cin >> r;
//	validation(r);
//	amount.setRate(r);
//	cout << "Enter number of years: ";
//	cin >> y;
//	validation(y);
//	amount.setYears(y);
//	amount.calcTerm();
//	cout << "The Monthly Payment is $" << amount.calcPay() << ".\n";
//	cout << "The total Payment is $" << amount.calcTotalPay() << ".\n";
//	system("pause");
//	return 0;
//}
//
