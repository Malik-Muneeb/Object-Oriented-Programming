#ifndef BUDGET3_H
#define BUDGET3_H
#include<iostream>
using namespace std;

class AuxiliaryOffice
{
	double auxBudget;
public:
	AuxiliaryOffice()
	{
		auxBudget = 0;
	}
	double getAuxbudget()
	{
		return auxBudget;
	}
	void addBudget(double);
};

class Budget
{
	double divBudget;
	static double corpBudget;
public:
	Budget()
	{
		divBudget = 0;
	}
	void addBudget(double amt)
	{
		divBudget += amt;
		corpBudget += amt;
	}
	double getDivBudget()
	{
		return divBudget;
	}
	static double getCorpBudget()
	{
		return corpBudget;
	}
	static void mainOffice(double);
	friend void AuxiliaryOffice::addBudget(double);
};

#endif
