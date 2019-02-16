#include"Parking.h"

int main()
{
	PoliceOfficer p1("Nouman", 420, "BMW","2016","ivery" ,777,45,180);
	cout << "Police Information\n";
	p1.getPoliceInfo();
	cout << "\nParked Car Information\n";
	p1.parkedCarInfo();
	p1.extraTime();
	p1.issueTicket(45,180);
	system("pause");
	return 0;
}