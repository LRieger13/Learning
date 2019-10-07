// ---------------------------------------------------------------
// Programming Assignment:	Lab WK 6
// Developer:			Leah Rieger
// Date Written:		08/12/2019
// Purpose:				Retail Program 
// ---------------------------------------------------------------


#include "retailItem.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
//PROTOTYPE FUNCTIONS
void displayItem(retailItem item);
int totalUnits(retailItem item, retailItem item2, retailItem item3);


//first object should use the DEFAULT values
//other 2 objects should have values assigned upon creation
//user inputs the variables (units on hand & price < 0)
//Then program should display all 3
//lastly program should tally inventory for all 3 items & display

int main() {
	
	int sum = 0, unitsOnHand1, unitsOnHand2;
	string description1, description2;
	double price1, price2;

	//Display items
	cout << "Welcome to your Retail Store! \n";
	cout << "                                 \n";
	cout << "                                 \n";
	cout << "Answer when prompted for each item on description, units on hand & price.\n";
	cout << "                                 \n";
	cout << "                                 \n";
	cout << "Please make sure and give a value greateer than 0\n";
	cout << "                                 \n";
	cout << "                                 \n";

	retailItem item;
	displayItem(item);

	cout << "Description of item: " << endl;
	cin >> description1;
	cout << "Units on hand: " << endl;
	cin >> unitsOnHand1;
	cout << "Price of item: " << endl;
	cin >> price1;
	retailItem item2(description1, unitsOnHand1, price1);

	cout << "Description of item: " << endl;
	cin >> description2;
	cout << "Units on hand: " << endl;
	cin >> unitsOnHand2;
	cout << "Price of item: " << endl;
	cin >> price2;
	retailItem item3(description2, unitsOnHand2, price2);

	cout << "\nDisplay all items:\n" << endl;
	sum = totalUnits(item, item2, item3);
	cout << "The total inventory is: " << sum << endl;

}


//Display items function
void displayItem(retailItem item) {

	cout << setprecision(2) << fixed << showpoint;
	cout << "Description: " << item.getDescription() << endl;
	cout << "Units on hand: " << item.getUnitsOnHand() << endl;
	cout << "Price: $" << item.getPrice() << endl << endl;
}


//Total inventory function
int totalUnits(retailItem item, retailItem item2, retailItem item3) {

	int sum = 0;
	sum += item.getUnitsOnHand() + item2.getUnitsOnHand() + item3.getUnitsOnHand();
	return sum;
}

