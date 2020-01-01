#include "Pirate.h"
#include <string>
using namespace std;

/// Constructors
Pirate::Pirate()
{
	string name = "unknown";
}

Pirate::Pirate(string name)
{
	setName(name);
}

/// Destructors
Pirate::~Pirate()
{

}

/// Accessors & Mutators 
string Pirate::toString()
{
	return name + " says: YARRRHH! ";
}

/// Behaviors
string Pirate::getName(void)
{
	return name;
}

void Pirate::setName(string name)
{
	if (name.length() > 0)
	{
		this->name = name;
	}
	else
	{
		this->name = "unknown";
	}
}