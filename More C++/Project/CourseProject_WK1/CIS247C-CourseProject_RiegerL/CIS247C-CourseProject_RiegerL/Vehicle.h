#pragma once
#include "Engine.h"
#include <string>
using namespace std;

class Vehicle
{
protected:
	// attribute
	string vin;
	string make;
	string model;
	short year;
	double price;
	Engine motor;		// adding in the Engine obj

public:
	// define construc/destruc
	Vehicle();
	Vehicle(string vin, string make, string model, short year, double price, Engine motor);
	virtual ~Vehicle() = 0;

	// accessor & mutator
	virtual string toString(void);
	double discountPrice(float discountPercent);

	// behavior
	string getVin(void);
	void setVin(string vin);

	string getMake(void);
	void setMake(string make);

	string getModel(void);
	void setModel(string mmodel);

	short getYear(void);
	void setYear(short year);

	double getPrice(void);
	void setPrice(double price);

	Engine getMotor(void);
	void setMotor(Engine motor);
};

