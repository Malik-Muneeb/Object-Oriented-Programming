//#include"TimeOff.h"
//
//int main()
//{
//	TimeOff emp1;
//	cout << "Enter Name of employee: ";
//	string name;
//	cin >> name;
//	emp1.setName(name);
//	cout << "Enter identification id: ";
//	int id;
//	cin >> id;
//	emp1.setId(id);
//	cout << "Enter max sick leaves in hours: ";
//	double h;
//	cin >> h;
//	emp1.setMaxSickDays(h);
//	cout << "Enter sick taken in hours: ";
//	cin >> h;
//	emp1.setSickTaken(h);
//	cout << "Enter max vacation in hours: ";
//	cin >> h;
//	while (h > 240)
//	{
//		cout << "Enter Max Vacation again (max vacation hours should less than 240 hours): ";
//		cin >> h;
//	}
//	emp1.setMaxVacation(h);
//	cout << "Enter vacation taken in hours: ";
//	cin >> h;
//	emp1.setVacTaken(h);
//	cout << "Enter max unpaid in hours: ";
//	cin >> h;
//	emp1.setMaxUnpaid(h);
//	cout << "Enter unpaid taken in hours: ";
//	cin >> h;
//	emp1.setUnpaidTaken(h);
//	cout << "\n\n\n***********Employee Record************\n\n\n";
//	cout << "Employee name: " << emp1.getName() << "\t ID: " << emp1.getId() << endl;
//	cout << "Max sick days are: " << emp1.getMaxSickDays() << endl;
//	cout << "sick taken are: " << emp1.getSickTaken() << endl;
//	cout << "Max vacation days: " << emp1.getMaxVacation() << endl;
//	cout << "vacation taken are: " << emp1.getVacTaken() << endl;
//	cout << "Max unpaid days are: " << emp1.getMaxUnpaid() << endl;
//	cout << "unpaid taken: " << emp1.getUnpaidTaken() << endl;
//	system("pause");
//	return 0;
//}