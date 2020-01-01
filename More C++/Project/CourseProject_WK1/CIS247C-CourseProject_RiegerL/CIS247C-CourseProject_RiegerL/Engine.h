#pragma once
#pragma once
#include <string>
using namespace std;


class Engine
{
private:
	// attribute
	short numCylinders;
	short horsePower;

public:
	// define construc/destruc
	Engine();
	Engine(short numCylinders, short horsePower);
	~Engine();

	// accessor & mutator
	short getNumCylinders(void);
	void setNumCylinders(short numCylinders);

	short getHorsePower(void);
	void setHorsePower(short horsePower);

	// behavior
	string toString(void);
};

