#include "Vehicle.h"
#include <string>
using namespace std;

/// Constructors
Vehicle::Vehicle()
{
	vin = "unknown";
	make = "unknown";
	model = "unknown";
	year = 0;
	price = 0.0;
	// motor was already created in default constructor
}

Vehicle::Vehicle(string vin, string make, string model, short year, double price, Engine motor)
{
	setVin(vin);
	setMake(make);
	setModel(model);
	setYear(year);
	setPrice(price);
	setMotor(motor);
}

/// Destructors
Vehicle::~Vehicle()
{

}

/// Accessor & Modifiers
string Vehicle::toString()
{
	return "Vin: " + vin + ", Make: " + make + ", Model: " + model + ", Year: " + to_string(year) + ", Price: "
		+ to_string(price) + ", Number of Cylinders: " + to_string(motor.getNumCylinders()) + ", Horsepower: " +
		to_string(motor.getHorsePower());
}

// calculate the discounted price
double Vehicle::discountPrice(float discountPercent)
{
	double newPrice = price - (price * discountPercent);
	return newPrice;
}

/// Behaviors
// vin
string Vehicle::getVin()
{
	return vin;
}

void Vehicle::setVin(string vin)
{
	if (vin.length() == 17)
	{
		this->vin = vin;
	}
	else
	{
		this->vin = "Unknown";
	}
}

// make
string Vehicle::getMake()
{
	return make;
}

void Vehicle::setMake(string make)
{
	if (make.length() > 0)
	{
		this->make = make;
	}
	else
	{
		this->make = "Unknown";
	}
}

// model
string Vehicle::getModel()
{
	return model;
}

void Vehicle::setModel(string model)
{
	if (model.length() > 0)
	{
		this->model = model;
	}
	else
	{
		this->model = "Unknown";
	}
}

// year
short Vehicle::getYear()
{
	return year;
}

void Vehicle::setYear(short year)
{

	if (year > 1980)
	{
		this->year = year;
	}
	else
	{
		this->year = 0;
	}
}

// price
double Vehicle::getPrice()
{
	return price;
}

void Vehicle::setPrice(double price)
{

	if (price > 0.0 && price < 1000000.0)
	{
		this->price = price;
	}
	else
	{
		this->price = 0.0;
	}
}

// composition (motor)
Engine Vehicle::getMotor()
{
	return motor;
}

void Vehicle::setMotor(Engine motor)
{
	this->motor = motor;
}
