#include "GasCar.h"
#include <string>
using namespace std;

/// Constructors
GasCar::GasCar()
{
	tankSize = 0.0f;
	mpg = 0;
}

GasCar::GasCar(string vin, string make, string model, short year, double price, short numDoors,
	bool hatchback, float tankSize, short mpg, Engine motor) : Car(vin, make, model, year, price, numDoors, hatchback, motor)
{
	setTankSize(tankSize);
	setMPG(mpg);
}

/// Destructors
GasCar::~GasCar()
{

}

/// Accessors & Mutators 
string GasCar::toString()
{
	return Car::toString() + ", Tank Size: " + to_string(tankSize) + ", MPG: " + to_string(mpg);
}

/// Behaviors
// tank size
float GasCar::getTankSize()
{
	return tankSize;
}

void GasCar::setTankSize(float tankSize)
{
	if (tankSize > 0)
	{
		this->tankSize = tankSize;
	}
	else
	{
		this->tankSize = 0.0f;
	}
}

// mpg
short GasCar::getMPG()
{
	return mpg;
}

void GasCar::setMPG(short mpg)
{
	if (mpg > 0)
	{
		this->mpg = mpg;
	}
	else
	{
		this->mpg = 0;
	}
}