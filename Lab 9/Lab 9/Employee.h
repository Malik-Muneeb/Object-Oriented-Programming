//#ifndef  EMPLOYEE_H
//#define EMPLOYEE_H
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Employee
//{
//	string name;
//	int empNum;
//	string hireDate;
//public:
//	Employee()
//	{
//		name = "";
//		empNum = 0;
//		hireDate = "01.01.2016";
//	}
//	Employee(string n, int num , string d)
//	{
//		name = n;
//		empNum = num;
//		hireDate = d;
//	}
//	void setName(string n) { name = n; }
//	void setEmpNum(int num) { empNum = num; }
//	void hireDate(string d) { hireDate = d; }
//	string getName() { return name; }
//	int getEmpNum() { return empNum; }
//	string getHireDate() { return hireDate; }
//};
//
//class ProductionWorker: public Employee
//{
//	int shift;
//	double hourlyPayRate;
//	Employee emp1;
//public:
//	ProductionWorker()
//	{
//		shift = 0;
//		hourlyPayRate = 0;
//	}
//	ProductionWorker(string n, int num, string d , int s, double h ):emp1(n,num,d)
//	{
//		shift = s;
//		hourlyPayRate = h;
//	}
//	void setShift(int s) { shift = s; }
//	void setPayRate (double h) { hourlyPayRate = h; }
//	int getShift() { return shift; }
//	double getPayRate() { return hourlyPayRate; }
//
//};
//
//#endif // ! EMPLOYEE_H
