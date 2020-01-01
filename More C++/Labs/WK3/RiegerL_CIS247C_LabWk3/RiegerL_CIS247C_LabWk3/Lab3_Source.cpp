/*
Leah Rieger
CIS247C
Lab 3 -- Overloading Wings
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "Wings.h"
using namespace std;

//constants


//prototypes


/// Entry to main application
int main(void)
{

	// create 2 wings obj
	Wings w1("Honey Hot", 6);
	Wings w2("BBQ", 6);

	//Test overloaded operator
	Wings w3 = w1 + w2;

	//have to use dot operator bc it isn't overloaded yet
	cout << "Combined wings: " << w3.getFlavor() << ", " << w3.getNumberOfPieces() << endl;

	Wings w4 = w3 - w2;
	cout << "Smaller wings: " << w4.getFlavor() << ", " << w4.getNumberOfPieces() << endl;

	Wings w5 = -w4;

	cout << "Negated wings: " << w4.getFlavor() << ", " << w4.getNumberOfPieces() << endl;

	w5 = -w5;	//makes it positive

	++w5;

	cout << "Pre-Incremented wings: " << w5.getFlavor() << ", " << w5.getNumberOfPieces() << endl;

	w5++;

	cout << "Post-Incremented wings: " << w5.getFlavor() << ", " << w5.getNumberOfPieces() << endl;

	Wings w6 = w5;		// assigns w5 value to w6

	cout << "Equal wings: " << w6.getFlavor() << ", " << w6.getNumberOfPieces() << endl;

	// input stream
	Wings w7;
	cin >> w7;

	cout << "Input Stream Wings: " << w7.getFlavor() << ", " << w7.getNumberOfPieces() << endl;

	// output stream
	cout << "Output Stream Wings: " << w7 << endl;


	// pause
	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}




