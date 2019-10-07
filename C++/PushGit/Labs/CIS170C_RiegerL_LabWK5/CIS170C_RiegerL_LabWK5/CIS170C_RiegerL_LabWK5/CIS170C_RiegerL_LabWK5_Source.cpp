// ---------------------------------------------------------------
// Programming Assignment:	LAB WK 5
// Developer:			Leah Rieger
// Date Written:		08/09/2019
// Purpose:				Password - Strings & Pointers Program 
// ---------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

//global constants declared
const int SIZE = 80;
const int MIN = 6;

//Function Prototyping
bool isValid(char *userPass);


//Main function
int main() {

	char userPass[SIZE] = {};

	while (true)
	{
		cout << "Welcome! We need to create a password! Below are the requirements.\n";
		cout << "                                                                  \n";
		cout << "Password Requirements: \n";
		cout << "                                                                  \n";
		cout << "\t -The password should be at least 6 characters long\n";
		cout << "                                                                  \n";
		cout << "\t -The password should contain at least 1 uppercase\n";
		cout << "\t\tand 1 lowercase letter.\n";
		cout << "                                                                  \n";
		cout << "\t -The password should have at least 1 digit.\n";
		cout << "                                                                \n";

		cout << "Please enter your password:\t" << endl;
		cin >> userPass;
		
		if (isValid(userPass)) {
			cout << "That password is Valid. Goodbye";
			return 1;
		}
		else
			cout << "Oops! Try again!\n";
		cout << "                                        \n";

	}	


	system("pause");
}


//Is what they entered a valid pswrd function
bool isValid(char *userPass) {
	bool userUp = false;		//does userPass have at least 1 uppercase
	bool userLow = false;		//does userPass have at least 1 lowercase
	bool userDigit = false;		//does userPass have at least 1 digit
	bool userLen = false;		//Is userPass length > MIN
	int length, i;

	length = strlen(userPass);

	if (length < MIN) {
		cout << "I'm sorry, that is not a valid password.\n";
		cout << "                                        \n";
	}
	else
		userLen = true;

	for (i = 0; i < length; i++)
	{
		if (isupper(userPass[i])) {
			userUp = true;
		}
		if (islower(userPass[i])) {
			userLow = true;
		}
		if (isdigit(userPass[i])) {
			userDigit = true;
		}
	}

	if (userUp && userLow && userLen && userDigit)
	{
		//Valid password notification and exit. 
		return true;
	}
	else
		return false;
}

