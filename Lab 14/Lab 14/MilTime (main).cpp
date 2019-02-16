//#include"MilTime.h"
//
//int main()
//{
//	int milH, milS;
//	cout << "Enter Military Hour: ";
//	cin >> milH;
//	while (milH < 0 || milH>2359)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> milH;
//	}
//	cout << "Enter Military Seconds: ";
//	cin >> milS;
//	while (milS < 0 || milS>59)
//	{
//		cout << "Wrong Input...!";
//		cout << "\nEnter Again: ";
//		cin.clear();
//		cin.ignore(100, '\n');
//		cin >> milS;
//	}
//	MilTime mt(milH, milS);
//	cout << "Military Time\n" << mt.getHour() << ":" << milS << endl;
//	cout << "Standard Time\n";
//	if (milH > 1200)
//	{
//		mt.showTime();
//		cout << " P.M";
//	}
//	else
//	{
//		mt.showTime();
//		cout << " A.M";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}