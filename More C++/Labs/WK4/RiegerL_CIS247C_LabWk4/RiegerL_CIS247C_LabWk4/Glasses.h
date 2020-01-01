#pragma once
#include <string>
using namespace std;


class Glasses
{
private:
	//attributes
	string color;
	float prescription;

public:
	//define construc\destruc
	Glasses(void);
	Glasses(string color, float prescription);
	~Glasses();

	//behaviors
	string toString(void);

	//accessor & mutators
	string getColor(void);
	void setColor(string color);

	float getPrescription(void);
	void setPrescription(float prescription);
	
};

