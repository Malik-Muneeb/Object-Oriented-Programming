#ifndef PARKING_H
#define PARKING_H
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class ParkedCar
{
	string maker, model, color;
	int licenseNo;
protected:
	float issueMin;
public:
	ParkedCar();
	ParkedCar(string maker, string model, string color, int license, float min);
	void carInfo();
};

class ParkingMeter :protected ParkedCar
{
protected:
	float timePast;
public:
	ParkingMeter() { timePast = 0; }
	ParkingMeter(float tp) { timePast = tp; }
	void extraTime() { cout << "Extra Time: " << timePast << endl; }
};

class ParkingTicket:protected ParkingMeter
{
	float issueMin, timePast;
	float hour, timePastHour;
	int fine;
public:
	ParkingTicket()
	{
		/*issueMin = 0;
		timePast = 0;*/
	}
	ParkingTicket(float issueMin, float timePast)
	{
		this->issueMin = issueMin;
		this->timePast = timePast;
	}
	int overTime(float issueMin , float timePast);
};

class PoliceOfficer
{
	string pName;
	int badgeNumber;
	ParkedCar p;
	ParkingMeter pM;
	ParkingTicket pT;
	int ticket;
	float issueMin;
	float timePast;
public:
	PoliceOfficer();
	PoliceOfficer(string pName, int badgeNo, string maker, string model, string color, int license, float min, float timepast)
		:p(maker, model, color, license, min), pM(timepast)
	{
		this->pName = pName;
		badgeNumber = badgeNo;
		this->issueMin = issueMin;
		this->timePast = timePast;
	}
	void getPoliceInfo()
	{
		cout << "Police Name: " << pName << endl;
		cout << "Badge Number: " << badgeNumber << endl;
	}
	void parkedCarInfo()
	{
		p.carInfo();
	}
	void extraTime()
	{
		pM.extraTime();
	}
	void issueTicket(float issueMin, float timePast);
};



#endif