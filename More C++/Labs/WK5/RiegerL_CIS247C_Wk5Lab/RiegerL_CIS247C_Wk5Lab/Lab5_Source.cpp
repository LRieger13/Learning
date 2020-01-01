/*
Leah Rieger
CIS247C
Inheritance Lab Wk5
11/26/2019
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "Employee.h"
#include "Manager.h"
#include "Hourly.h"
#include "Salary.h"
using namespace std;

//prototypes
void displayEmployee(Employee* emp);
///Entry point to application

int main()
{
	// create 3 obj
	Hourly a;
	Salary b;

	// 1 obj using all 3 classes
	Manager c;

	// display size of hourly obj; display size of first obj mem addr
	// cout << "The size of Hourly is: " << 
	cout << "The size of the 'Hourly' object is: " << sizeof(Hourly) << endl;
	cout << "The size of the first object is: " << sizeof(&a) << endl;

	// call displayEmployee method & send address of Hourly obj
	// call displayEmployee method & send address of Salary obj
	// call displayEmployee method & send address of Manager obj
	displayEmployee(&a);
	displayEmployee(&b);
	displayEmployee(&c);

	// pause
	cout << "\nPress any key to continue...";
	_getch();

	return 0;
}

// displayEmployee accepts Employee pointer as parameter.
// prototype void displayEmployee(Employee* emp);
void displayEmployee(Employee* emp)
{
	cout << "First Name: " << emp->getFName() << endl;
	cout << "Last Name: " << emp->getLName() << endl;
	cout << "SSN: " << emp->getLName() << endl;
	cout << "Phone: " << emp->getLName() << endl;

	// in displayEmployee convert Employee obj back to child state
	// then display specific child info using 1 line at a time
	// use "dynamic_case" to convert obj back to child
	Manager* mgr=dynamic_cast<Manager*>(emp);	// trying to convert
	// Employee parent obj to a Manager child obj
	if(mgr!=NULL)	// if mgr is not NULL, we have a mgr obj!
	{ cout << "Bonus: $"<<mgr->getBonus()<<endl; }
	 
};
