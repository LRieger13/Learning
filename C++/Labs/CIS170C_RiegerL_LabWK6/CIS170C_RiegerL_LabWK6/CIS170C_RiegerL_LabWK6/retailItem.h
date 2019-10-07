// ---------------------------------------------------------------
// Programming Assignment:	Lab WK 6
// Developer:			Leah Rieger
// Date Written:		08/12/2019
// Purpose:				Retail Program - header file
// ---------------------------------------------------------------
#pragma once
#include <iostream>
using namespace std;


class retailItem {

//3 objects, first one has default values & other two take user input
//test user inputs < 0

private:
	string description;
	int unitsOnHand;
	double price;
	
public:
	//both constructors
	retailItem(); //default
	retailItem(string description1, int unitsOnHand1, double price1); //takes arguments
	
	//Setters
	void setDescription(string description2);
	void setUnitsOnHand(int unitsOnHand2);
	void setPrice(double price2);

	//Getters
	string getDescription();
	int getUnitsOnHand();
	double getPrice();

};

