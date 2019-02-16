#include"Ship.h"

int main()
{
	int i;
	Ship* ptr[3] = { new Ship("Titanic", "1997"), new CruiseShip(100,"BlackHawk", "1985"), new CargoShip(50,"SeaHawk", "1984") };
	for (i = 0; i < 3; i++)
	{
		cout << "Ship Number " << i + 1 << "  :  \n\n\n";
		ptr[i]->print();
		cout << "\n";
	}
	system("pause");
	return 0;
}