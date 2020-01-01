#pragma once
#include <string>
using namespace std;


class Pirate
{
protected:
	// attribute
	string name;

public:
	// define construc/destruc
	Pirate();
	Pirate(string name);
	virtual ~Pirate() = 0;

	// accessor & mutator
	virtual string speak() = 0;		// pure virtual method -- abstract method
	string toString(void);

	// behavior
	string getName(void);
	void setName(string name);
};

