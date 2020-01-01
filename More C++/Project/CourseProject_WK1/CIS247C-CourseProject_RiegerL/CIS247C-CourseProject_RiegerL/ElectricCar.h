#pragma once
#include "Car.h"
#include <string>
using namespace std;

class ElectricCar : public Car
{
private:
	// attribute
	float batterySize;
	short range;
	short mpgE;

public:
	// define construc/destruc
	ElectricCar();
	ElectricCar(string vin, string make, string model, short year, double price, short numDoors,
		bool hatchback, float batterySize, short range, short mpgE, Engine motor);
	virtual ~ElectricCar();

	// accessor & mutator
	string toString();

	// behavior
	float getBatterySize();
	void setBatterySize(float batterySize);

	short getRange();
	void setRange(short range);

	short getMpgE();
	void setMpgE(short mpgE);
};

