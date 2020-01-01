#pragma once
#include <string>
#include <iostream>
using namespace std;

class Wings
{
private:
	//attributes
	string flavor;
	short numPieces;

public:
	//constructors
	Wings(string flavor = "unknown", short numberOfPieces = 0);
	~Wings(void);

	//behaviors
	Wings operator+(const Wings secondWings) const;  //wings3 = wings1+ wings2;
	Wings operator-(const Wings secondWings) const;	//wings3 = wings1- wings2;
	Wings operator-(void);	//inside () means minus, no () means negative..	wings2 = -wings1; (negative)
	Wings& operator++(void);		// ++wings; incremintor
	Wings operator++(int);		// use current version of obj, wings++;
	Wings& operator=(const Wings& equalWings);	// Wings(w2) will be a copy of Wings(w1)

	// overload the input stream op
	// cin >> wings;
	friend istream& operator>>(istream& is, Wings& obj);

	//overload the output stream op
	// cout << wings << endl;
	friend ostream& operator<<(ostream& os, Wings& obj);

	//accessors & mutators
	string getFlavor(void);
	void setFlavor(string flavor);

	short getNumberOfPieces(void);
	void setNumberOfPieces(short numberOfPieces);
};

