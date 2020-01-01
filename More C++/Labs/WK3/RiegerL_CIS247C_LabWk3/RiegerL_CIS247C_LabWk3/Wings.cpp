#include "Wings.h"

//constructors
Wings::Wings(string flavor, short numberOfPieces)
{
	//do validation once, in mutator then call method. 
	setFlavor(flavor);
	setNumberOfPieces(numberOfPieces);
}

Wings::~Wings(void)
{
	// no dynamic obj to destroy
}

//behaviors
Wings Wings::operator+(const Wings secondWings) const
{
	// create the wings obj to return
	Wings thirdWings;

	//tell C++ how to combine the Wings attributes
	thirdWings.numPieces = this->numPieces + secondWings.numPieces;
	if (this->flavor != secondWings.flavor)

		thirdWings.flavor = this->flavor + " and " + secondWings.flavor;
	else
		thirdWings.flavor = this->flavor;

	// return new combined wings
	return thirdWings;
}


Wings Wings::operator-(const Wings secondWings) const
{
	Wings thirdWings;

	//tell C++ how to subtract wings attribute
	thirdWings.numPieces = this->numPieces - secondWings.numPieces;
	string full = this->flavor;		//current flavor	(honey hot, bbq)

	short position = full.find("and", 0);
	if (position > 0)
		thirdWings.flavor = full.substr(0, position - 1);
	else
		thirdWings.flavor = this->flavor;
	

	//return new Wings obj
	return thirdWings;
}

Wings Wings::operator-(void)
{
	numPieces = -1 * numPieces;		//numPieces = -numPieces
	// flavor = ??		typically do NOT negate strings

	return *this;
}

Wings& Wings::operator++(void)
{
	++numPieces;		//incrementing wings by 1

	//return incremented wings obj
	return *this;
}

Wings Wings::operator++(int)
{
	// save the old state (old values)
	Wings temp = *this;		// save the old state

	//tell C++ how to post incr the current state
	++(*this);

	//return old state (old values)
	return temp;
}


Wings& Wings::operator=(const Wings& equalWings)
{
	if (this != &equalWings)	//confirm that this is NOT same obj
	{
		this->flavor = equalWings.flavor;
		this->numPieces = equalWings.numPieces;
	}

	//return the new obj
	return *this;
}

/// outside the class
// overload input
istream& operator>>(istream& is, Wings& obj)
{
	// append to the input stream
	cout << "Enter the wing flavor: ";
	getline(is, obj.flavor);
	cout << "Enter the number of wings: ";
	is >> obj.numPieces;

	// return the input stream so more can be appended
	return is;
}


//overload output
ostream& operator<<(ostream& os, Wings& obj)
{
	// append info to the current output stream
	os << "Wings Flavor: " << obj.flavor << ", Number of Wings: " << obj.numPieces;

	//return output stream so more can be appended
	return os;
}



//accessors & mutators
string Wings::getFlavor(void)
{
	return flavor;
}

void Wings::setFlavor(string flavor)
{
	if (flavor.length() > 0)
	{
		this->flavor = flavor;
	}
	else
	{
		this->flavor = "unknown";
	}
}

short Wings::getNumberOfPieces(void)
{
	return numPieces;
}

void Wings::setNumberOfPieces(short numberOfPieces)
{
	if (numberOfPieces > 0)
	{
		numPieces = numberOfPieces;
	}
	else
	{
		numPieces = 0;
	}
}