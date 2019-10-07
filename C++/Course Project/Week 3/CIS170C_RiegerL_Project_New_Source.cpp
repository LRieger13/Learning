// ---------------------------------------------------------------
// Programming Assignment:	Course Project
// Developer:				Leah Rieger
// Date Written:			07/19/2019
// Purpose:					Programming Tutorial Program 
// ---------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;


int main()
{
	char ans = 'N';

	string userName, letsGo, userAnswer, nextLevel; //declare variables
	const string correctAnswer = "string userName;";
	cout << "Hello and Welcome to your Programming Tutorial! What is your name? \n";//description of program
	std::cin >> userName;
	cout << "Call me Brain. \n";

	//Here begins the tutorial
	cout << "Check this example: \n";
	cout << "------------------------------------------------------------------------ \n";
	cout << "                                                                   \n";
	cout << "string userName; \n";
	cout << "This is how you declare variables. Give it a go? \n";

	// A new line character(/n) keeps getting inserted into cin and continuing past the getline (because of a bug where std::cin >> leaves a /n in the cin buffer). 
	// We use Ignore to clear any previous input.
	cin.ignore();
	// Get line allows free entry of text up to a delimiter. If one is not specified it defaults to /n. 
	getline(cin, userAnswer);

	//loop to continue when entering a wrong answer
	while ((correctAnswer != userAnswer))
	{
		cout << "Uhoh!! That's not quite it, let's try again. \n";
		getline(cin, userAnswer);
	};

	//Processing, Comparing answers
	if (correctAnswer == userAnswer)
	{
		cout << "WooHoo! Ready for the next one? \n";
		system("pause");
	}

	return 0;
}