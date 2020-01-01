/*
Leah Rieger
CIS247C
Lab Wk7
12/11/2019
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "ArrayList.h"
using namespace std;

//constants

//prototypes

///Entry point to application

int main(void)
{
	// checking for memory leaks
#if defined(DEBUG) | defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	//creating int ArrayList
	ArrayList<int> intList;	// data type in <>
	intList.add(15);
	intList.add(30);
	intList.add(50);
	intList.add(4);
	intList.add(75);
	intList.add(21);

	// for loop showing data items
	for (int i = 0; i < intList.getCount(); i++)
	{
		cout << intList.get(i) << ", ";
	}

	cout << "\n" << endl;
	cout << "Count: " << intList.getCount() << endl;		// show count
	cout << "Capacity: " << intList.getCapacity() << endl;	// show capacity

	cout << "\n\n" << endl;

	// ArrayList holding string data items
	ArrayList<string> strList;
	strList.add("Lennon");
	strList.add("Janice");
	strList.add("John");
	strList.add("Lisa");

	// display list data
	for (int i = 0; i < strList.getCount(); i++)
	{
		cout << strList.get(i) << ", ";
	}

	cout << "\n" << endl;
	cout << "Count: " << strList.getCount() << endl;
	cout << "Capacity: " << strList.getCapacity() << endl;

	// pause
	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}




