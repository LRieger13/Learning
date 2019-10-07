// ---------------------------------------------------------------
// Programming Assignment:	Lab WK 6
// Developer:			Leah Rieger
// Date Written:		08/12/2019
// Purpose:				Retail Program 
// ---------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "retailItem.h"

using namespace std;

//retrieving values [get function]
string retailItem::getDescription() {
	return description;
}
int retailItem::getUnitsOnHand() {
	return unitsOnHand;
}
double retailItem::getPrice() {
	return price;
}

void retailItem::setDescription(string description2) {
	description = description2;
}
void retailItem::setUnitsOnHand(int unitsOnHand2) {
	unitsOnHand = unitsOnHand2;
}
void retailItem::setPrice(double price2) {
	price = price2;
}


//add function for default item adding
//Call class and set to variable. 
retailItem::retailItem() {
	setDescription("Shirt");
	setUnitsOnHand(10);
	setPrice(33);
}

//add function for adding an item manually. 
//cout input variables here
retailItem::retailItem(string description1, int unitsOnHand1, double price1) {
	setDescription(description1);
	setUnitsOnHand(unitsOnHand1);
	setPrice(price1);
}


bool isValid(int value) {
	if (value != 0) {
		return true;
	}
		if (value == 0) {
			cout << "Uhoh! Please enter a value greater than 0.\n";
			return false;
		}
}