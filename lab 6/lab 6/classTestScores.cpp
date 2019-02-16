//#include"classTestScores.h"
//
//classTestScores :: classTestScores()
//	{
//		stName = "";
//		numTestScores = 0;
//	}
//classTestScores :: 	~classTestScores()
//	{
//		if (numTestScores > 0)
//		{
//			delete[] testScores;
//		}
//	}
//classTestScores :: classTestScores(classTestScores &x)
//	{
//		this->numTestScores = x.numTestScores;
//		testScores = new double[numTestScores];
//		for (int i = 0; i < numTestScores; i++)
//		{
//			testScores[i] = x.testScores[i];
//		}
//	}
//void classTestScores :: setNumTestScores(int n)
//	{
//		numTestScores = n;
//		createTestScoresArray();
//	}
//void classTestScores :: setStudentName(string name)
//	{
//		stName = name;
//	}
//string classTestScores :: getStudentName()
//	{
//		return stName;
//	}
//void classTestScores :: setTestScore(int index, int num)
//	{
//		testScores[index] = num;
//	}
//double classTestScores :: getTestScore(int index)
//	{
//		return testScores[index];
//	}
//double classTestScores :: getNumTestScores()
//	{
//		double sum = 0.0;
//		for (int i = 0; i < numTestScores; i++)
//		{
//			sum = sum + testScores[i];
//		}
//		return sum;
//	}
//
////for task 3
//
//classTestScores classTestScores::operator=(const classTestScores &x)
//{
//	if (numTestScores > 0)
//		delete[] testScores;
//	this->numTestScores = x.numTestScores;
//	testScores = new double[numTestScores];
//	for (int i = 0; i < numTestScores; i++)
//	{
//		testScores[i] = x.testScores[i];
//	}
//	return *this;
//}
