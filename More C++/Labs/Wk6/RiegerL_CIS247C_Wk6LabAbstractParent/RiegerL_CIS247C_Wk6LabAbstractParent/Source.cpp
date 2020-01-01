/*
Leah Rieger
CIS247C
Abstract Parent Lab Wk6
12/06/2019
*/
#include "Pirate.h"
#include "CaptainPirate.h"
#include "ZombiePirate.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


//prototypes
string determineChild(Pirate* ptrPirate);

///Entry point to application

int main()
{

	//check for memory leaks
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	
	// array of pirates
	const int PIRATES = 3;
	Pirate* pirates[3];
	pirates[0] = new Captain("Jack", "Monkey");
	pirates[1] = new Zombie("Pintel", 5);
	pirates[2] = new Zombie("Ragetti", 2);

	// loop through elements in array
	for (int i = 0; i < PIRATES; i++)
	{
		cout << determineChild(pirates[i]) << endl;
	}

	// clean up heap memory
	for (int i = 0; i < PIRATES; i++)
	{
		delete pirates[i];
	}
	
	// pause
	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}


// method to display Pirate obj info
// should determine which child is being held & show info
// use dynamic cast
string determineChild(Pirate* ptrPirate)
{
	//dynamic cast parent
	Captain* cp = dynamic_cast<Captain*>(ptrPirate); //NULL if doesn't work
	if (cp != NULL)
	{
		return "One day " + cp->speak() + "\n";
	}
	
	Zombie* zp = dynamic_cast<Zombie*>(ptrPirate); // NULL if doesn't work
	if (zp != NULL)
	{
		return "One day " + zp->speak() + "\n";
	}

	
}

