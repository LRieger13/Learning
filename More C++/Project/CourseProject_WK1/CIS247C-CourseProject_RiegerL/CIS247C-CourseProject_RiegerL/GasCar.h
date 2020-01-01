#include "Car.h"
#include <string>
using namespace std;

/// Constructors
class GasCar : public Car
{
private:
	// attributes
	float tankSize;
	short mpg;

public:
	// (de)/constructor
	GasCar();
	GasCar(string vin, string make, string model, short year, double price, short numDoors, bool hatchback,
		float tankSize, short mpg, Engine motor);
	virtual ~GasCar();

	// behaviors
	string toString();

	// accessor & mutator
	float getTankSize();
	void setTankSize(float tankSize);

	short getMPG();
	void setMPG(short mpg);

};
