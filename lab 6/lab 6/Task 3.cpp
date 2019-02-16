//#include "classTestScores.h"
//
//int main()
//{
//	classTestScores record1;
//	int count;
//	string name;
//	cout << "Enter name of student: ";
//	cin >> name;
//	record1.setStudentName(name);
//	cout << "How many Test Scores you want to enter: ";
//	cin >> count;
//	record1.setNumTestScores(count);
//	for (int i = 0; i < count; i++)
//	{
//		int num;
//		cout << "Enter marks for subject #" << i + 1 << ": ";
//		cin >> num;
//		record1.setTestScore(i, num);
//	}
//	cout << "\n\nBefore Calling Copy Constructor\n";
//	cout << "***Object 1***\n";
//	cout << record1.getStudentName() << "'s record:\n";
//	for (int i = 0; i < count; i++)
//		cout << "Marks for subject #" << i + 1 << ": " << record1.getTestScore(i) << endl;
//	cout << "Total Marks: " << record1.getNumTestScores() << endl;
//	
//	classTestScores record2, record3;
//		record3 = record2 = record1;
//	cout << "\n\nAfter Calling Copy Constructor\n";
//	cout << "***Object 1***\n";
//	cout << record1.getStudentName() << "'s record:\n";
//	for (int i = 0; i < count; i++)
//		cout << "Marks for subject #" << i + 1 << ": " << record1.getTestScore(i) << endl;
//	cout << "Total Marks: " << record1.getNumTestScores() << endl;
//	
//	cout << "***Object 2***\n";
//	cout << record1.getStudentName() << "'s record:\n";
//	for (int i = 0; i < count; i++)
//		cout << "Marks for subject #" << i + 1 << ": " << record2.getTestScore(i) << endl;
//	cout << "Total Marks: " << record2.getNumTestScores() << endl;
//	
//	cout << "***Object 3***\n";
//	cout << record1.getStudentName() << "'s record:\n";
//	for (int i = 0; i < count; i++)
//		cout << "Marks for subject #" << i + 1 << ": " << record2.getTestScore(i) << endl;
//	cout << "Total Marks: " << record2.getNumTestScores() << endl;
//	system("pause");
//	return 0;
//}
