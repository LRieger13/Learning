#include "Card.h"

bool Card::randomizerSeeded = false;

Card::Card() //Constructor
{
	// seed the randomizer only once for ALL card objects
	if (randomizerSeeded == false)	// ( !randomizerSeeded ) same meaning diff way to write
	{
		srand(time(0));
		randomizerSeeded = true;
	}

	// Create random num 3-6 for card suit
	short min = 3;
	short max = 6;
	suit = rand() % (max - min + 1) + min;

	// Create random num 2 - 14 -- cards are 2 to Ace
	min = 2;
	max = 14;
	short number = rand() % (max - min + 1) + min;

	if (number >= 2 && number <= 9)
	{
		value = number;
		face = number + 48;
	}
	else if (number == 10)
	{
		value = number;
		face = 'T';
	}
	else if (number == 11)
	{
		value = 10;
		face = 'J';
	}
	else if (number == 12)
	{
		value = 10;
		face = 'Q';
	}
	else if (number == 13)
	{
		value = 10;
		face = 'K';
	}
	else if (number == 14)
	{
		value = 11;
		face = 'A';
	}
	else              //else is reserved for error checking!   
	{
		value = -1;
		face = 'E';
	}
}

Card::~Card()	//Destructor
{

}

// Method to display card
string Card::toString()
{
	string output = " ";	
	output += suit;
	output += face;
	return output;
}

// Method to flip act to 1
bool Card::flipAceToOne()
{
	if (value == 11)
	{
		value = 1;
		return true;
	}
	else
	{
		return false;
	}
}