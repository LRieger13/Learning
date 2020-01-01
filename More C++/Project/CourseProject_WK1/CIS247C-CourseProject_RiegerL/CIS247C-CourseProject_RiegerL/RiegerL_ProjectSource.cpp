/*
Leah Rieger
12/1/2019
CIS247C Course Project
*/

#include "Car.h"
#include "SUV.h"
#include "ElectricCar.h"
#include "GasCar.h"
#include "Vehicle.h"
#include <iostream>
#include <string>
#include <iomanip>		// setw, setprecision
#include <fstream>		// required to read/write to files
using namespace std;

//prototypes
void saveToFile(Vehicle* ptrVehicle);
string determineChildType(Vehicle* ptrVehicle);


/// Entry point for the application
int main()
{
	// creating some vehicle objs
	const int NUM_CARS = 4;
	Vehicle* vehicles[NUM_CARS];
	vehicles[0] = new Car("V98765432100123456", "Toyota", "Camery", 2008, 7800.0, 4, true, Engine(4, 100));
	vehicles[1] = new SUV("S13579864201234567", "Nissan", "Juke", 2015, 20000.0, 8, 53.3f, Engine(6, 250));
	vehicles[2] = new GasCar("G10020056790012345", "Ford", "Thunderbird", 1967, 15000.0, 2, false, 15, 10, Engine(8, 345));
	vehicles[3] = new ElectricCar("V98765432101234567", "Volkswagen", "I.D. Buzz", 2021, 40000.0, 4, true, 75, 100, 85, Engine(0, 168));


	//check the size
	cout << "Size of the Vehicle Pointer: " << sizeof(vehicles[0]) << endl;
	cout << "Size of pointer to (dereferenced) Vehicle object: " << sizeof(*vehicles[0]) << endl;
	cout << endl;	//blank line

	//delete file if it exists
	remove("data.txt");

	//call the method to write your Car to the file
	for (int i = 0; i < NUM_CARS; i++)
	{
		saveToFile(vehicles[i]);	// using positions in pointer array
	}

	// clean heap memory
	for (int i = 0; i < NUM_CARS; i++)
	{
		delete vehicles[i];
	}

	// pause
	cout << endl;
	system("pause");

	return 0;
}
	
// write Vehicle to file
void saveToFile(Vehicle* ptrVehicle)
{
	//  open the pipe to the file
	ofstream outToFile("data.txt", ios::app);	//ios::app appends data to end of file

	// determine child type & write the child data
	string childType = determineChildType(ptrVehicle);

	// if the file is open, write data to file
	if (outToFile.is_open())
	{
		// write the child type & STAY ON SAME OUTPUT LINE
		outToFile << childType << ',';

	// ON SAME LINE, write parent info using parent reference
		outToFile << ptrVehicle->getVin() << ',' << ptrVehicle->getMake() << ',' << ptrVehicle->getModel() << ','
			<< ptrVehicle->getPrice() << ',' << ptrVehicle->getMotor().getNumCylinders() << ','
			<< ptrVehicle->getMotor().getHorsePower();

		if (childType == "Car")
		{
			// write info if Car or child of Car [GasCar or ElectricCar]
			Car* c1 = dynamic_cast<Car*>(ptrVehicle);
			outToFile << ',' << c1->getNumDoors() << ',' << c1->getHatchback();
		}
		else if (childType == "Electric Car")
		{
			ElectricCar* e1 = dynamic_cast<ElectricCar*>(ptrVehicle);
			outToFile << ',' << e1->getBatterySize() << ',' << e1->getRange() << ',' << e1->getMpgE();
		}
		else if (childType == "Gas Car")
		{
			GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
			outToFile << ',' << g1->getTankSize() << ',' << g1->getMPG();
		}

		// drop down to next line in file so we are ready for next record
		outToFile << endl;

		// close pipe
		outToFile.close();

		// tell user data was written to file
		cout << ptrVehicle->getMake() << " " << ptrVehicle->getModel() << " was written to the file!" << endl;
	}
}

// determine the child type & write the child datastring childType = determineChildType(ptrVehicle);
string determineChildType(Vehicle* ptrVehicle)
{
	// dynamic cast parent reference into electric car, if succeed return "electric car"
	ElectricCar* e1 = dynamic_cast<ElectricCar*>(ptrVehicle);
	if (e1 != nullptr)
	{
		return "ElectricCar";
	}

	// dynamic cast parent reference into gas car, if succeed return "gas car"
	GasCar* g1 = dynamic_cast<GasCar*>(ptrVehicle);
	if (g1 != nullptr)
	{
		return "GasCar";
	}

	// dynamic cast parent reference into car, if succeed return "car"
	Car* c1 = dynamic_cast<Car*>(ptrVehicle);
	if (c1 != nullptr)
	{
		return "Car";
	}

	// dynamic cast parent reference into suv, if succeed return "SUV"
	SUV* s1 = dynamic_cast<SUV*>(ptrVehicle);
	if (s1 != nullptr)
	{
		return "SUV";
	}

	return "Error";
}