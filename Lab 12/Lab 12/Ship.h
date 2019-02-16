#ifndef	SHIP_H
#define SHIP_H

#include<iostream>
#include<string>
using namespace std;

/*Design	a	Ship	class	that	has	the	following	members :
•	A	member	variable	for	the	name	of	the	ship(a	string)
•	A	member	variable	for	the	year	that	the	ship	was	built(a	string)
•	A	constructor	and	appropriate	accessors	and	mutators
•	A	virtual	print	function	that	displays	the	ship’s	name	and	the	year	it	was	built*/


class Ship
{
protected:
	string name;
	string year;
public:
	Ship() { name = ""; year = ""; }
	Ship(string n, string y) { name = n; year = y; }
	void setName(string n) { name = n; }
	void setyear(string y) { year = y; }
	string getName() { return name; }
	string getYear() { return year; }
	virtual void print()
	{
		cout << "Name of Ship: " << name << endl;
		cout << "Year: " << year << endl;
	}
};

/*Design	a	CruiseShip	class	that	is	derived	from	the	Ship	class.	The	CruiseShip	class
should	have	the	following	members:
•	A	member	variable	for	the	maximum	number	of	passengers	(an	int	)
•	A	constructor	and	appropriate	accessors	and	mutators
•	A	print	function	that	overrides	the	print	function	in	the	base	class.	The	CruiseShip
class’s	print	function	should	display	only	the	ship’s	name	and	the	maximum	number of	
passengers.*/


class CruiseShip :public Ship
{
	int maxPass;
public:
	CruiseShip() { maxPass = 0; }
	CruiseShip(int n, string name, string y) { maxPass = n; this->name = name; year = y; }
	void setPass(int n) { maxPass = n; }
	int getPass() { return maxPass; }
	void print()
	{
		cout << "Ship's Name: " << name << endl;
		cout << "Maximum Number of Passenger: " << maxPass << endl;
	}
};

/*Design	a	CargoShip	class	that	is	derived	from	the	Ship	class.	The	CargoShip	class
should	have	the	following	members:
•	A	member	variable	for	the	cargo	capacity	in	tonnage	(an	int	).
•	A	constructor	and	appropriate	accessors	and	mutators.
•	A	print	function	that	overrides	the	print	function	in	the	base	class.	The	CargoShip
class’s	print	function	should	display	only	the	ship’s	name	and	the	ship’s	cargo	capacity.*/

class CargoShip :public Ship
{
	int capacity;
public:
	CargoShip() { capacity = 0; }
	CargoShip(int c, string n, string y) { capacity = c; name = n; year = y; }
	void setCapacity(int c) { capacity = c; }
	int getCapacity() { return capacity; }
	void print()
	{
		cout << "Ship's Name: " << name << endl;
		cout << "Ship's Cargo Capacity: " << capacity << endl;
	}
};


#endif 