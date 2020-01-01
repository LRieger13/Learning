#include "Car.h"

/// constructor
Car::Car() : Vehicle()
{
	numDoors = 0;
	hatchback = false;

}

// Setting all of the car information
Car::Car(string vin, string make, string model, short year, double price,
	short numDoors, bool hatchback, Engine motor) : Vehicle(vin, make, model, year, price, motor)
{
	setVin(vin);
	setMake(make);
	setModel(model);
	setYear(year);
	setPrice(price);
	setNumDoors(numDoors);
	setHatchback(hatchback);
	setMotor(motor);
}

/// destructor
Car::~Car()
{

}

// returning all information on car
string Car::toString(void)
{
	return Vehicle::toString() + ", Number of Doors: " + to_string(numDoors) + ", Hatchback: "
		+ to_string(hatchback);
}

// the number of doors on the car
short Car::getNumDoors(void)
{
	return numDoors;
}

void Car::setNumDoors(short numDoors)
{
	if (numDoors > 0 && numDoors < 5)
	{
		this->numDoors = numDoors;
	}
	else
	{
		this->numDoors = 0;
	}
}

//Does the car have hatchback
bool Car::getHatchback(void)
{
	return hatchback;
}

void Car::setHatchback(bool isHatchback)
{
	this->hatchback = isHatchback;
}

