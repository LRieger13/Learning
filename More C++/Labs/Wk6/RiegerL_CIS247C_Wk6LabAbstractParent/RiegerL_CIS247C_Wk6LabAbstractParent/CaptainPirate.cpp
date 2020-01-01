#include "Pirate.h"
#include "CaptainPirate.h"
#include "ZombiePirate.h"
#include <string>
using namespace std;

/// Constructors
Captain::Captain() : Pirate()
{
	pet = "unknown";
}

Captain::Captain(string name, string pet) : Pirate(name)
{
	setPet(pet);
}

/// Destructors
Captain::~Captain()
{

}

/// Accessors & Mutators 
string Captain::toString()
{
	return Pirate::toString() + ", Pet: " + pet;
}

string Captain::speak()
{

	return Pirate::toString() + "It be a " + pet + "! \nAye Scallywags! Swab that poop deck!!";
}

/// Behaviors
string Captain::getPet(void)
{
	return pet;
}

void Captain::setPet(string pet)
{
	if (pet.length() > 0)
	{
		this->pet = pet;
	}
	else
	{
		this->pet = "unknown";
	}
}