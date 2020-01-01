#pragma once
#include "Glasses.h"
#include <string>
using namespace std;

class Person
{
private:
	// attribute
	string name;
	string ssn;
	Glasses myGlasses;	// default glasses object


public:
	// define construc/destruc
	Person(void);
	Person(string name, string ssn, Glasses theGlasses);
	~Person(void);

	// behavior
	string toString(void);
	string writeToFile(void);
	string readFromFile(void);

	// accessor & mutator
	string getname(void);
	void setName(string name);

	string getSSN(void);
	void setSSN(string ssn);

	Glasses getMyGlasses(void);
	void setMyGlasses(Glasses theGlasses);
};


