#pragma once

#include <ctime>
#include <stdlib.h>
#include <string>
using namespace std;


class Card
{
private:
	//attributes -- every card gets these arttributes
	char suit;
	char face;
	short value;

	//class-wide variable -- 1 copy in memory shared by all card objects
	static bool randomizerSeeded;

public:
	// Constructor & Destructor
	Card();
	~Card();

	// behaviors
	string toString();
	bool flipAceToOne();

	//accessors & mutators
	inline char getSuit() { return suit; }

	inline char getFace() {	return face; }

	inline short getValue() { return value;	}
};


