#pragma once
#include "Pirate.h"
#include <string>
using namespace std;


class Zombie : public Pirate
{
private:
	// attribute
	short brainHunger;

public:
	// define construc/destruc
	Zombie();
	Zombie(string name, short brainHunger);
	~Zombie();

	// accessor & mutator
	string speak();
	string toString();

	// behavior
	short getBrainHunger(void);
	void setBrainHunger(short brainHunger);
};

