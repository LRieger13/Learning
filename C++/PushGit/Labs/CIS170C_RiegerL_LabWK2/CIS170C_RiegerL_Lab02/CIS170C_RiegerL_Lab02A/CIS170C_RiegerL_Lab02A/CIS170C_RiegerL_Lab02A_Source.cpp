// ---------------------------------------------------------------
// Programming Assignment:	LAB2A
// Developer:			Leah Rieger
// Date Written:		07/17/2019
// Purpose:				Smallest Number Program 
// ---------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	int num1, num2, smallestNumber{}; //Declare variables
	cout << "Welcome to the Smallest Number Guesser! \n";//output of description
	cout << "You will be asked to enter two numbers.\n";
	cout << "The smallest value will be displayed or a message if they are the same! \n";
	cout << "Please, enter your first number: \n";//input from user for first number
	cin >> num1;
	cout << "Please, enter your second number: \n";//input from user for second number
	cin >> num2;

	if (num1 == num2)//if both numbers are equal
	{
		smallestNumber = num1;
		cout << "The numbers you entered are equal. Nice try!" << endl;
	}
	else if (num1 > num2) {//if number 1 is bigger than number 2
		smallestNumber = num2;//assign number 2 as smallest
	}
	else {
		smallestNumber = num1;//else assign number 1 as smallest
	}
	cout << "The smallest number is: " << smallestNumber << endl;//output of smallest number
	system("pause");
}