#pragma once
#include "Pirate.h"
#include <string>
using namespace std;


class Captain : public Pirate
{
private:
	// attribute
	string pet;

public:
	// define construc/destruc
	Captain();
	Captain(string name, string pet);
	~Captain();

	// accessor & mutator
	string speak();
	string toString();

	// behavior
	string getPet(void);
	void setPet(string pet);
};

