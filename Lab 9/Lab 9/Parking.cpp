#include"Parking.h"

/*************************
ParkedCar
*************************/

ParkedCar::ParkedCar()
{
	maker = "ferrari";
	model = "GT-2016";
	color = "Black";
	licenseNo = 345;
	issueMin = 0;
}
ParkedCar::ParkedCar(string maker, string model, string color, int license, float min)
{
	this->maker = maker;
	this->model = model;
	this->color = color;
	licenseNo = license;
	issueMin = min;
}
void ParkedCar::carInfo()
{
	cout << "Maker: " << maker << endl;
	cout << "Model: " << model << endl;
	cout << "color: " << color << endl;
	cout << "License Number: " << licenseNo << endl;
	cout << "Issue minutes: " << issueMin << endl;
}

/*****************************
ParkingTicket
******************************/
int ParkingTicket::overTime(float issueMin , float timePast )
{
	hour = issueMin / 60;
	timePastHour = timePast / 60;
	if (timePastHour > hour)
	{
		timePastHour -= hour;
		if (timePastHour <= 1)
		{
			fine = timePastHour * 25;
			return fine;
		}
		else
		{
			fine = 25 + ceil(timePastHour - 1) * 10;
			return fine;
		}
	}
	return 0;
}

/**********************************
policeOfficer
**********************************/
PoliceOfficer::PoliceOfficer()
{
	pName = "";
	badgeNumber = 0;
}

void PoliceOfficer::issueTicket(float issueMin, float timePast)
{
	if (pT.overTime(issueMin, timePast))
	{
		cout << "Ticket: " << pT.overTime(issueMin, timePast)<<endl;
	}
	else
	{
		cout << "car Parked legally\n";
	}
}