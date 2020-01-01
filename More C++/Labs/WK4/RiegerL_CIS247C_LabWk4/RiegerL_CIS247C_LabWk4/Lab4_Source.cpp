/*
Leah Rieger
CIS247C
Composition Lab Wk4
11/22/2019
*/
#include <iostream>
#include <string>
#include <conio.h>
#include "Person.h"
using namespace std;


///Entry point to application

int main()
{
	// create a default person obj
	Person p1;

	cout << p1.toString() << endl;

	// change the values by setting the name & ssn
	p1.setName("Bob");
	p1.setSSN("222-22-2222");
	Glasses g1("Black", 1.75f);
	p1.setMyGlasses(g1);

	cout << p1.toString() << endl;

	// change glasses using an anonymous glasses obj
	p1.setMyGlasses(Glasses("Brown", 2.25));

	cout << "\n" << p1.toString() << endl;

	// show color only
	cout << "\nColor: " << p1.getMyGlasses().getColor() << endl;  // person composed of objects that has attributes

	// show precription only
	cout << "\nPrescription: " << p1.getMyGlasses().getPrescription() << endl;	// this step is the COMPOSITION****

	// write person obj state to file
	string result = p1.writeToFile();

	cout << "\n" << result << endl;

	// create default obj, change name, read data into new obj
	Person newPerson;
	newPerson.setName("Bob");
	result = newPerson.readFromFile();

	cout << "\n" << result << endl;

	// display the data that was read from file
	cout << "\nPerson object with data from the file:\n " << endl;
	cout << "\t" << newPerson.toString() << endl;


	// pause
	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}




