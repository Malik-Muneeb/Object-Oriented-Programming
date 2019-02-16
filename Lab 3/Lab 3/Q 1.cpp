//#include<iostream>
//using namespace std;
//
//
//struct MonthlyBudget
//{
//	float housing, utilities, household, trans, food;
//	float medical , insurance , entertainment , clothing , miscell ; 
//	float total;
//};
//
//float getData(MonthlyBudget &x)
//{
//	cout << "Enter your expenses...\n\n";
//	cout << "Housing: ";
//	cin >> x.housing;
//	cout << "Utilities: ";
//	cin >> x.utilities;
//	cout << "Household expenses: ";
//	cin >> x.household;
//	cout << "Transportation: ";
//	cin >> x.trans;
//	cout << "Food: ";
//	cin >> x.food;
//	cout << "Medical: ";
//	cin >> x.medical;
//	cout << "Insurance: ";
//	cin >> x.insurance;
//	cout << "Entertainment: ";
//	cin >> x.entertainment;
//	cout << "Clothing: ";
//	cin >> x.clothing;
//	cout << "Miscellaneous: ";
//	cin >> x.miscell;
//	return x.clothing + x.entertainment + x.food + x.household + x.housing + x.insurance + x.medical + x.miscell + x.trans + x.utilities;
//}
//
//void compareBudget(MonthlyBudget x, MonthlyBudget y)
//{
//	cout << "\nReport:- \n\n";
//	if (x.housing > y.housing)
//		cout << "Under Buget...You saved $" << x.housing - y.housing << " from Housing.\n";
//	else
//		cout << "Over Budget...You spent $" << y.housing - x.housing << " extra on Housing.\n";
//	if (x.utilities > y.utilities)
//		cout << "Under Buget...You saved $" << x.utilities - y.utilities << " from utilities.\n";
//	else
//		cout << "Over Budget...You spent $" << y.utilities - x.utilities << " extra on utilities.\n";
//	if (x.household > y.household)
//		cout << "Under Buget...You saved $" << x.household - y.household << " from household.\n";
//	else
//		cout << "Over Budget...You spent $" << y.household - x.household << " extra on household.\n";
//	if (x.trans > y.trans)
//		cout << "Under Buget...You saved $" << x.trans - y.trans << " from transportation.\n";
//	else
//		cout << "Over Budget...You spent $" << y.trans - x.trans << " extra on transportation.\n";
//	if (x.food > y.food)
//		cout << "Under Buget...You saved $" << x.food - y.food << " from food.\n";
//	else
//		cout << "Over Budget...You spent $" << y.food - x.food << " extra on food.\n";
//	if (x.medical > y.medical)
//		cout << "Under Buget...You saved $" << x.medical - y.medical << " from medical.\n";
//	else
//		cout << "Over Budget...You spent $" << y.medical - x.medical << " extra on medical.\n";
//	if (x.insurance > y.insurance)
//		cout << "Under Buget...You saved $" << x.insurance - y.insurance << " from insurance.\n";
//	else
//		cout << "Over Budget...You spent $" << y.insurance - x.insurance << " extra on insurance.\n";
//	if (x.entertainment > y.entertainment)
//		cout << "Under Buget...You saved $" << x.entertainment - y.entertainment << " from Entertainment.\n";
//	else
//		cout << "Over Budget...You spent $" << y.entertainment - x.entertainment << " extra on Entertainment.\n";
//	if (x.clothing > y.clothing)
//		cout << "Under Buget...You saved $" << x.clothing - y.clothing << " from clothing.\n";
//	else
//		cout << "Over Budget...You spent $" << y.clothing - x.clothing << " extra on clothing.\n";
//	if (x.miscell > y.miscell)
//		cout << "Under Buget...You saved $" << x.miscell - y.miscell << " from miscellaneous.\n";
//	else
//		cout << "Over Budget...You spent $" << y.miscell - x.miscell << " extra on miscellaneous.\n";
//}
//
//int main()
//{
//	MonthlyBudget budget = { 500.00,150.00,65.00,50.00,250.00,30.00,100.00,150.00,75.00,50.00,1420.00 };
//	MonthlyBudget budget1;
//	float consumedAmount;
//	consumedAmount=getData(budget1);
//	compareBudget(budget, budget1);
//	cout << "\n\nOverall Report: \n";
//	if (budget.total > consumedAmount)
//		cout << "You saved $" << budget.total - consumedAmount << " from total Budget.\n";
//	else
//		cout << "You spent $" << consumedAmount - budget.total << " extra from total budget.\n";
//	system("pause");
//	return 0;
//}
//
