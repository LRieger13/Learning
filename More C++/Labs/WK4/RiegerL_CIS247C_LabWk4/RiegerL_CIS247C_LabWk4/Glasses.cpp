#include "Glasses.h"
#include <string>
using namespace std;


/// Constructors
Glasses::Glasses()
{
	color = "unknown";
	prescription = 0.0f;
}

Glasses::Glasses(string color, float prescription)
{
	setColor(color);
	setPrescription(prescription);
}


/// Destructors
Glasses::~Glasses(void)
{

}


/// Behaviors
//to string convert
string Glasses::toString(void)
{
	string strPrescription = to_string(prescription);
	strPrescription = strPrescription.substr(0, 4);	// substring
	return "Color: " + color + ", Prescription: " + strPrescription;
}

// color
string Glasses::getColor(void)
{
	return color;
}

void Glasses::setColor(string color)
{
	if (color.length() > 0)
	{
		this->color = color;
	}
	else
	{
		this->color = "unknown";
	}
}

//prescription
float Glasses::getPrescription(void)
{
	return prescription;
}

void Glasses::setPrescription(float prescription)
{
	if (prescription > 0.0f)	// the 'f' is due to working with floats
	{
		this->prescription = prescription;
	}
	else
	{
		this->prescription = 0.0f;
	}
}

