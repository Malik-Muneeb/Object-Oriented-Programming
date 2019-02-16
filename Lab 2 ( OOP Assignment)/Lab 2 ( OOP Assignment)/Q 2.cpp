//#include<iostream>
//using namespace std;
//
//class population
//{
//	double popu,	//population.
//		NOB	,	//Number of Births.
//		NOD;	//Number of Deaths.
//public:
//	void setPopulation(double p)
//	{
//			popu = p;
//	}
//	void setNOB(double n)
//	{
//			NOB = n;
//	}
//	void setNOD(double n)
//	{
//		NOD = n;
//	}
//	double getBirthrate()
//	{
//		return (NOB / popu);
//	}
//	double getDeathrate()
//	{
//		return (NOD / popu);
//	}
//};
//
//
//int main()
//{
//	population p1;
//	double p, b, d;
//	cout << "Enter population: ";
//	cin >> p;
//	while (p < 1)
//	{
//		cout << "Enter population again (but not less than 1): ";
//		cin >> p;
//	}
//	p1.setPopulation(p);
//
//	cout << "Enter Number of Births per year: ";
//	cin >> b;
//	while (b < 0)
//	{
//		cout << "Enter Number of Births again (but not less than 0): ";
//		cin >> b;
//	}
//	p1.setNOB(b);
//
//	cout << "Enter Number of Deaths per year: ";
//	cin >> d;
//	while (d < 0)
//	{
//		cout << "Enter Number of Deaths again (but not less than 0): ";
//		cin >> d;
//	}
//	p1.setNOD(d);
//
//	cout << "The Birth rate is : " << p1.getBirthrate() << endl;
//	cout << "The Death rate is : " << p1.getDeathrate() << endl;
//	system("pause");
//	return 0;
//}
//
