#include <iostream>
#include "candyMachine.h"

using namespace std;



void showSelection();
void sellProduct( dispenserType& product, cashRegister& pCounter);

int main()
{
	cashRegister counter;
	dispenserType candy(100, 50);
	dispenserType chips(100, 65);
	dispenserType gum(75, 45);
	dispenserType cookies(100, 85);

	int choice;

	showSelection();
	cin >> choice;
	
	while (choice !=9)
	{
		switch (choice)
		{
		case 1:
			sellProduct(candy, counter);
			break;
		case 2:
			sellProduct(chips, counter);
			break;
		case 3:
			sellProduct(gum, counter);
			break;
		case 4:
			sellProduct(cookies, counter);
			break;
		default:
			cout << "Invalid selection." << endl;
		}
		showSelection();
		cin >> choice;
		}
		return 0;
	}
	
	void showSelection()
	{
		cout << "*** Welcome to Shelly's Candy Shop ***" << endl;
		cout << "To select in item, enter " << endl;
		cout << "1 for Candy" << endl;
		cout << "2 for Chips" << endl;
		cout << "3 for Gum" << endl;
		cout << "4 for Cookies " << endl;
		cout << "9 to exit" << endl;
	}

	void sellProduct(dispenserType& product, cashRegister& pCounter)
	{
		int amount;
		int amount2;

		if (product.getNoOfItems() > 0)
		{
			cout << "Please deposit " << product.getCost()
				<< " cents" << endl;
			cin >> amount; 

			if (amount <  product.getCost())
			{
				cout << "Please deposit another "
					<< product.getCost() - amount 
					<< " cents" << endl;
				cin >> amount2;
				amount = amount + amount2;
			}

			if (amount >= product.getCost())
			{
				pCounter.acceptAmount(amount);
				product.makeSale();
				cout << "Collect your item at the bottom and "
					<< "enjoy." << endl;
			}
			else 
				cout << "The amount is not enough. "
					<< "Collect what you deposited."<< endl;
			cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;
		}
		else 
			cout << "Sorry, this item is sold out. " << endl;
		}
