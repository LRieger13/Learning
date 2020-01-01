#include "SUV.h"
#include <string>
using namespace std;

/// Constructors
SUV::SUV() : Vehicle()
{
	numSeats = 0;
	cargoSize = 0;
}

SUV::SUV(string vin, string make, string model, short year, double price, short numSeats, float cargoSize,
	Engine motor) : Vehicle(vin, make, model, year, price, motor)
{
	setNumSeats(numSeats);
	setCargoSize(cargoSize);
}

/// Destructors
SUV::~SUV()
{

}

/// Accessors & Mutators 
string SUV::toString()
{
	return Vehicle::toString() + ", Number of Seats: " + to_string(numSeats) + ", Cargo size: " + to_string(cargoSize);
}

/// Behaviors
// number of seats
short SUV::getNumSeats()
{
	return numSeats;
}

void SUV::setNumSeats(short numSeats)
{
	if (numSeats > 0 && numSeats < 16)
	{
		this->numSeats = numSeats;
	}
	else
	{
		this->numSeats = 0;
	}
}

// cargo size
float SUV::getCargoSize()
{
	return cargoSize;
}

void SUV::setCargoSize(float cargoSize)
{
	if (cargoSize > 0.0f && cargoSize < 200.0f)
	{
		this->cargoSize = cargoSize;
	}
	else
	{
		this->cargoSize = 0;
	}
}