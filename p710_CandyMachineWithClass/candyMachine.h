// Candy Machine Header file

class cashRegister
{
public:
	int getCurrentBalance() const;
	//Function to show the current amount in the cash register.
	//Postcondition: The value of cachOnHand is returned.

	void acceptAmount (int amountIn);
	//Function to receive the amount deposited by the customer and update it in the register. 
	//Postcondition: cashOnHand = cashOnHand + amountIn;

	cashRegister(int cashIn = 500);
	//Constructor
	//Sets the cash in the register to a specific amount. 
	//PostconditionL cashOnHand = cashIn;
	//if no value is specified when the object is declared, the default value assigned to cashOnHand is 500.

private:
	int cashOnHand;
	// variable to store the cash in the register.
};

class dispenserType
{
public: 
	int getNoOfItems() const;

	//Function to show the number of items in the machine.
	//Postcondition: The value of the numberOfItems is returned. 

	int getCost() const;
	//Function to show the cost of the item chosen.
	//Postcondition: The value of the cost is returned.

	void makeSale();
	//Function to reduce the number of items by 1.
	//PostconditionL numberOfITems--;

	dispenserType(int setNoOfItems = 50, int setCost = 50);
	//Constructor
	//Sets the cost and number of items in the dispenser to the values specified by the user. 
	//Postcondition: numberOfItems = setNoOfItems;
	// 		cost = setCost;
	//		if no value is set for a parameter, then it's default value is assigned to the corresponding
	//		member variable.	
private:
	int numberOfItems;	//variable to store the number of items in the dispenser
	int cost;		//variable to store the cost of an item
};
