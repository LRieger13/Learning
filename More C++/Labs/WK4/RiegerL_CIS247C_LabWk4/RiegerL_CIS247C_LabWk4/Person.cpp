#include "Person.h"
#include <fstream>
#include <string>
using namespace std;


/// Constructors
Person::Person()
{
	name = "unknown";
	ssn = "unknown";
	// myGlasses obj has already been created
}

Person::Person(string name, string ssn, Glasses theGlasses)
{
	setName(name);
	setSSN(ssn);
	setMyGlasses(theGlasses);
}


/// Destructors
Person::~Person(void)
{

}

// behavior
string Person::toString(void)
{
	return "Name: " + name + ", SSN: " + ssn + ", Glasses: [ " + myGlasses.toString() + " ]";
}

string Person::writeToFile(void)
{
	// write the sate of Person to the file using person's name
	string fileName = name + ".txt";
	ofstream oFile(fileName);	//defaults to ios::out (destroys prior data) -- ios::app (appends to file)
	
	oFile << name << endl;
	oFile << ssn << endl;
	oFile << myGlasses.getColor() << endl;
	oFile << myGlasses.getPrescription() << endl;

	oFile.close();

	// tell user file closed
	return name + "'s data was written to file.";
}	



string Person::readFromFile(void)
{
	// read from file
	string fileName = name + ".txt";
	ifstream iFile(fileName);

	if (!iFile.is_open())	// ! means NOT --> if( iFile.is_open() == flase );
	{
		return "Error. File cannot be open. Does it exist?";
	}
	else
	{
		getline(iFile, name);	// read into this obj name attribute
		getline(iFile, ssn);	// read into this obj ssn attribute

		string color = "";
		getline(iFile, color);	// reads glasses color
		float pers = 0.0f;
		iFile >> pers;		// reads glasses prescription
		this->setMyGlasses(Glasses(color, pers));	//anonymous obj
		iFile.ignore(1);	// ignore & use up the '\n' newline

		iFile.close();

		// tell user data has been loaded
		return name + "'s data has been loaded from the file.";

	}
}


// accessor & mutator
string Person::getname(void)
{
	return name;
}

void Person::setName(string name)
{
	if (name.length() > 0)
		this->name = name;
	else
		this->name = "unknown";
}

string Person::getSSN(void)
{
	return ssn;
}

void Person::setSSN(string ssn)
{
	if ((ssn.length() == 9) || (ssn.length() == 11))
	{
		this->ssn = ssn;
	}
	else
	{
		this->ssn = "unknown";
	}
}

Glasses Person::getMyGlasses(void)
{
	return myGlasses;
}

void Person::setMyGlasses(Glasses theGlasses)
{
	this->myGlasses = theGlasses;
}

