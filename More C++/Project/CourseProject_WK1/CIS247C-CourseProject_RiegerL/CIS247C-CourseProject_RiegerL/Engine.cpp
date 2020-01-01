#include "Engine.h"
#include <string>
using namespace std;

/// Constructors
Engine::Engine()
{
	numCylinders = 0;
	horsePower = 0;
}

Engine::Engine(short numCylinders, short horsePower)
{
	setNumCylinders(numCylinders);
	setHorsePower(horsePower);
}

/// Destructor
Engine::~Engine()
{

}

// accessor & mutator
short Engine::getNumCylinders(void)
{
	return numCylinders;
}

void Engine::setNumCylinders(short numCylinders)
{
	if (numCylinders > 0 && numCylinders < 13)
	{
		this->numCylinders = numCylinders;
	}
	else
	{
		this->numCylinders = 0;
	}
}

short Engine::getHorsePower(void)
{
	return horsePower;
}

void Engine::setHorsePower(short horsePower)
{
	if (horsePower > 0 && horsePower < 1000)
	{
		this->horsePower = horsePower;
	}
	else
	{
		this->horsePower = 0;
	}
}

