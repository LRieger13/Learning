#include "Pirate.h"
#include "CaptainPirate.h"
#include "ZombiePirate.h"
#include <string>
using namespace std;

/// Constructors
Zombie::Zombie() : Pirate()
{
	brainHunger = 0;
}

Zombie::Zombie(string name, short brainHunger) : Pirate(name)
{
	setBrainHunger(brainHunger);
}

/// Destructors
Zombie::~Zombie()
{

}

/// Accessors & Mutators 
string Zombie::speak(void)
{
	// zombie speak varies based on hunger level
	switch (this->brainHunger)
	{
	case 0:
		return Pirate::toString() + "So full of Brains!!";
		break;

	case 1:
		return Pirate::toString() + "Starting to get hungry.";
		break;
	case 2:
	case 3:
		return Pirate::toString() + "Seriously...Starting to need brains..Very hungry";
		break;
	case 4:
	case 5:
		return Pirate::toString() + "Too hungry.. reverting back..BRRRRRRAAAAAAAAAAAIIIIIIIIINNNNNNNNNSSSSSSSSSS";
		break;
	default:
		return "Error! Something went wrong!";
		break;
	}
}

string Zombie::toString()
{
	return "";
}

/// Behaviors
short Zombie::getBrainHunger(void)
{
	return brainHunger;
}

void Zombie::setBrainHunger(short brainHunger)
{
	if (brainHunger > 0)
	{
		this->brainHunger = brainHunger;
	}
}