//#include<iostream>
//#include<cmath>
//using namespace std;
//class monthly_payment
//{
//private:
//    double  no_of_years;
//	double interest_rate, loan_amount;
//	double term, payment;
//public:
//	void set_loan_amount(double l)
//	{
//		loan_amount = l;
//	}
//	void set_interest_rate(double i)
//	{
//		interest_rate = i;
//	}
//	void set_no_of_years(double y)
//	{
//		no_of_years = y;
//	}
//	double monthly_payment_amount()
//	{
//		term = pow(1+interest_rate/12, 12 * no_of_years);
//		payment =  (loan_amount*interest_rate / 12*term) / (term - 1);
//		return payment;
//	}
//    double total_paid_amount()
//	{
//		return payment * 12 * no_of_years;
//	}
//};
//int main()
//{
//	double loan, years, rate;
//	cout << "enter loan amount : ";
//	cin >> loan;
//	while (loan < 0)
//	{
//		cout << "enter positive value " << endl;
//		cout << "enter loan amount : ";
//		cin >> loan;
//	}
//	cout << "enter no. of years : ";
//	cin >> years;
//	while (years < 0)
//	{
//		cout << "enter positive value " << endl;
//		cout << "enter no. of years : ";
//		cin >> years;
//	}
//	cout << "enter interest rate : ";
//	cin >> rate;
//	while (rate < 0)
//	{
//		cout << "enter positive value " << endl;
//		cout << "enter interest rate : ";
//		cin >> rate;
//	}
//	monthly_payment p1;
//	p1.set_loan_amount(loan);
//	p1.set_interest_rate(rate);
//	p1.set_no_of_years(years);
//	cout << "Monthly Payment is : $" << p1.monthly_payment_amount() << endl;
//	cout << "Total Amount Paid to bank is : $" << p1.total_paid_amount()<<endl;
//	cout << endl;
//	system("pause");
//	return 0;
//}

