#include<iostream>
#include<cstring>
#include<conio.h>
#include<iomanip>
using namespace std;

const int s = 25;
const int len = 5;
static int successfulTrans = 0, unsuccessfulTrans = 0;
char title[len][s] = { "calculus","DLD","basic electronics","OOP","writing workshop" };
char author[len][s] = { "nouman","adeel","shehre","azam","mudassar" };
char publisher[len][s] = { "ilmi","ghazali","ilmi","dogar","dogar" };
char stockPos[len][s] = { "630","425","465","636","420" };
int price[len] = { 500,300,450,700,1000 };
int copies[len] = { 50,20,100,65,80 };

class Books
{
private:
	void updatePrice(int i)
	{
		char c;
		int amt;
		cout << "Press I to increase price: \nPress D to decrease price: \nEnter Choice:  ";
		cin >> c;
		if (c == 'I' || c == 'i')
		{
			cout << "Enter Price : ";
			cin >> amt;
			price[i] = price[i] + amt;
		}
		else if (c == 'D' || c == 'd')
		{
			cout << "Enter Price: ";
			cin >> amt;
			price[i] = price[i] - amt;
		}
		cout << "New price of " << title[i] << " is: " << price[i] << endl;
	}

public:
	void showList();
	int searchBook(char[], char[]);
	void showDetails(int);
	void getCopies(int, int, int&, int&);

};

void Books::showList()
{
	cout << "_________________________________\n\n";
	cout << left << setw(25) << "Title" << setw(25) << "Author"<<endl;
	cout <<"_________________________________\n\n";
	for (int index = 0; index<len; index++)
	{
		cout << left << setw(25) << title[index] << setw(25) << author[index] << endl;
	}
	cout << endl;
}

int Books::searchBook(char t[], char au[])
{
	int index;
	bool ter = true;
	for (int i = 0; i<len && ter; i++)
	{
		if (_strcmpi(t, title[i]) == 0 && _strcmpi(au, author[i]) == 0)
		{
			index = i;
			ter = false;
		}
	}

	if (ter == false)
		return index;
	else
		return -1;

}

void Books::showDetails(int index)
{
	cout << "Details of Require Book..." << endl;
	cout << "Title: " << title[index] << endl;
	cout << "Author: " << author[index] << endl;
	cout << "Publisher: " << publisher[index] << endl;
	cout << "Stock Position " << stockPos[index] << endl;
	cout << "Price: " << price[index] << endl;
	cout << "Stock: " << copies[index] << endl;
}

void Books::getCopies(int index, int noOfCopies, int &x, int &y)
{
	if (copies[index] >= noOfCopies)
	{
		cout << "Total Price = " << noOfCopies*price[index];
		copies[index] = copies[index] - noOfCopies;
		++x;
	}
	else
	{
		cout << "Required copies not in the stock";
		++y;
	}

	cout << "\nPress P to update price: ";
	char update;
	update = _getche();
	if (update == 'P' || update == 'p')
		updatePrice(index);

}


int main()
{
	char c = 's';
	Books req;      //requirement.
	cout << "-------BOOK INVENTORY----------\n\n" << endl;
	req.showList();
	while (c != '$')
	{
		char bookName[s]="\0", bookAuthor[s]="\0";
		cout << "\nEnter Book Name: ";
		cin.getline(bookName, s);
		cout << "Enter Book's Author Name: ";
		cin.getline(bookAuthor, s);
		int num;
		num = req.searchBook(bookName, bookAuthor);
		if (num != -1)
		{
			req.showDetails(num);
			cout << "\nEnter No. of copies: ";
			int copy;
			cin >> copy;
			req.getCopies(num, copy, successfulTrans, unsuccessfulTrans);

		}
		else
			cout << "\nNot Found :( ";
		cout << "\nSuccessful Transactions: " << successfulTrans;
		cout << "\nUnsuccessful Transactions: " << unsuccessfulTrans;
		cout << "\n\nPress $ sign for exit OR press any key to continue: ";
		c = _getche();
	}
	return 0;
}
