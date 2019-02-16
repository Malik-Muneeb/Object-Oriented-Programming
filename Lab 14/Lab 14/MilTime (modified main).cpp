//#include"MilTime.h"
//
//int main()
//{
//	int milH, milS;
//	cout << "Enter Military Hour: ";
//	cin >> milH;
//	cout << "Enter Military Seconds: ";
//	cin >> milS;
//	bool check = true;
//	while(check)
//	{
//		try
//		{
//			if (milH < 0 || milH>2359)
//				throw "ERROR: BAD HOUR\n";
//			if (milS < 0 || milS>59)
//				throw "ERROR: BAD Seconds\n";
//			check = false;
//		}
//		catch (char *ex)
//		{
//			cout << ex;
//			if (strcmp(ex, "ERROR: BAD HOUR\n") == 0)
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//				cout << "Enter Military Hour again: ";
//				cin >> milH;
//			}
//			else if (strcmp(ex, "ERROR: BAD Seconds\n") == 0)
//			{
//				cin.clear();
//				cin.ignore(100, '\n');
//				cout << "Enter Military Seconds again: ";
//				cin >> milS;
//			}
//		}
//	}
//	MilTime mt(milH, milS);
//	cout << "\n\n\n";
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