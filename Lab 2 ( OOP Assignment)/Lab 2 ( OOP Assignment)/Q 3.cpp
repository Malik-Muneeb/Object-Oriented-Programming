#include<iostream>
using namespace std;

class temperature
{
	int temp;
public:
	temperature()
	{
		temp = 0;
		cout << "This program display a list of the substances"
			"(Ethyl, Oxygen, Water) that will freeze and"
			" boil at given temperature.\n\n";
	}
	void setTemperature(int t)
	{
		temp = t;
	}
	bool isEthylFreezing()
	{
		if (temp <= -173)
			return true;
		else
			return false;
	}
	bool isEthylBoiling()
	{
		if (temp >= 172)
			return true;
		else
			return false;
	}
	bool isOxygenFreezing()
	{
		if (temp <= -362)
			return true;
		else
			return false;
	}
	bool isOxygenBoiling()
	{
		if (temp >= -306)
			return true;
		else
			return false;
	}
	bool isWaterFreezing()
	{
		if (temp <= 32)
			return true;
		else
			return false;
	}
	bool isWaterBoiling()
	{
		if (temp >= 212)
			return true;
		else
			return false;
	}
};

int main()
{
	temperature t1;
	int tmp;
	cout << "Enter temperature: ";
	cin >> tmp;
	t1.setTemperature(tmp);
	if (t1.isEthylFreezing())
		cout << "The Ethyl will freeze at given temperature.\n";
	if (t1.isEthylBoiling())
		cout << "The Ethyl will boil at given temperature.\n";
	if (t1.isOxygenFreezing())
		cout << "The Oxygen will freeze at given temperature.\n";
	if (t1.isOxygenBoiling())
		cout << "The Oxygen will boil at given temperature.\n";
	if (t1.isWaterFreezing())
		cout << "The Water will freeze at given temperature.\n";
	if (t1.isWaterBoiling())
		cout << "The Water will boil at given temperature.\n";
	system("pause");
	return 0;
}

