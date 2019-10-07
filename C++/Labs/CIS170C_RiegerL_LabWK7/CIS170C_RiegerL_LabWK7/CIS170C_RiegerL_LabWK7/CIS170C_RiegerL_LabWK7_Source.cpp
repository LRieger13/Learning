// ---------------------------------------------------------------
// Programming Assignment:	Lab WK 7
// Developer:			Leah Rieger
// Date Written:		08/19/2019
// Purpose:				Address Database Program 
// ---------------------------------------------------------------
//Specification: Append and display records in a address database 
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void menu(void);
void writeData(void);
void readData(void);

const char FileName[] = "TestAddress.txt";
int main() {
	menu();
	return 0;
} //end main



void menu(void) {
	//allow user to choose to append records, display records or exit the program
	//code below from Lab overview
	char userChoice = ' ';
	

	do {
		//ask for user's choice
		std::cout << "Would you like to A) Append to the record, B) Show Records, or E) Exit\n";
		std::cin >> userChoice;
		
		userChoice = toupper(userChoice);

		if (userChoice == 'A') {
			writeData();
		}
		if (userChoice == 'B') {
			readData();
		}
	} while (userChoice != 'E');


}//end menu


void writeData(void) {
	//Write the Address Info to a file
	//loop while user still has data to write to file
	//eg outStream<<name<<”#”; //where # is the delimiter
	string name, street, city, state, zip;

	ofstream outMyStream(FileName, ios::app);

	//get all of the information
	if (outMyStream.is_open()) {
		std::cout << "Enter Your Name: " << endl;
		std::cin.ignore();
		std::getline(std::cin, name);
		std::cout << "Enter Your Street: " << endl;
		std::getline(std::cin, street);
		std::cout << "Enter Your City: " << endl;
		std::getline(std::cin, city);
		std::cout << "Enter Your State: " << endl;
		std::getline(std::cin, state);
		std::cout << "Enter Your Zip Code: " << endl;
		std::getline(std::cin, zip);
	
		//'#' is a delimiter 
		outMyStream << name << "#"; //do this for all info 
		outMyStream << street << "#";
		outMyStream << city << "#";
		outMyStream << state << "#";
		outMyStream << zip << "#";
	}

	outMyStream.close();
}//end write data



void readData(void) {
	//read data from a file
	//use the split function to break a
	//deliminated line of text into fields
	ifstream inMyStream(FileName);

	if (inMyStream.is_open()) {

		//set character to use as a line between record displays	
		string recBreaks = "";
		recBreaks.assign(20, '-');

		int fieldCount = 0;  //keep track of the number of fields read
		int recordCount = 1; //keep track of the number of records read

		//read the first field
		fieldCount = 1;
		string fieldBuffer;
		std::getline(inMyStream, fieldBuffer, '#');

		while (!inMyStream.eof()) {

			//display the field
			switch (fieldCount) {
			case 1:
				std::cout << recBreaks << endl;
				std::cout << "record # " << recordCount << endl;
				std::cout << "Name...." << fieldBuffer << endl; break;
			case 2:
				std::cout << "Street.." << fieldBuffer << endl; break;
			case 3:
				std::cout << "City...." << fieldBuffer << endl; break;
			case 4:
				std::cout << "State..." << fieldBuffer << endl; break;
			case 5:
				std::cout << "Zip....." << fieldBuffer << endl;
				fieldCount = 0;
				recordCount++; 	break;
			}

			//read the next field
			std::getline(inMyStream, fieldBuffer, '#');
			fieldCount++;
		}
		std::cout << recBreaks << endl;

		inMyStream.close();

	}//end read data
}

