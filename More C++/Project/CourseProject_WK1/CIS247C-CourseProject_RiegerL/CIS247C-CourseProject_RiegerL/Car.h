#pragma once
#include "Vehicle.h"
#include <string>
using namespace std;

class Car : public Vehicle
{
private:
	//attributes
	short numDoors;
	bool hatchback;
	

public:
	//constructors & destructors
	Car(void);
	Car(string vin, string make, string model, short year, double price, 
		short numDoors, bool hatchback, Engine motor);
	~Car();

	//behaviors in the public section!
	string toString(void);


	// accessors & mutators
	short getNumDoors(void);
	void setNumDoors(short numDoors);

	bool getHatchback(void);
	void setHatchback(bool isHatchback);
};

