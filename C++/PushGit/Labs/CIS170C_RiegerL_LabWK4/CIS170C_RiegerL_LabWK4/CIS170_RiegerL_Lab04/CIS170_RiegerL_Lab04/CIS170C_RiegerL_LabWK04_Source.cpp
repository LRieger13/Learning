// ---------------------------------------------------------------
// Programming Assignment:	LAB04
// Developer:			Leah Rieger
// Date Written:		07/31/2019
// Purpose:				Flip A Coin Program 
// ---------------------------------------------------------------


#include <iostream>
#include <ctime>



//Prototyping
void flipCoin(int numToss);
void rollDice(int numSide, int numRoll);
void menu();


//Main Function
int main() {


	//seed random num gen
	unsigned seed = time(0);
	srand(seed);


	std::cout << "Welcome to your game!";
	std::cout << "You can choose to flip a coin or roll a die! Fate is in your hands... \n";
	std::cout << "So lets begin! \n";
	std::cout << "                                            \n";
	menu();	


	return 0;
}


//menu to go back through and play another game or to exit.
void menu() {
	//declare numToss, numSide, userchoice
	std::string userChoice;
	int numToss, numSide, numRoll;


		std::cout << "Would you like to (C) Flip a Coin, (D) Roll a Die or (E) Exit: \n";
		std::cin >> userChoice;

		if (userChoice == "C") {
			std::cout << "How many times would you care to flip the coin? \n";
			std::cin >> numToss;
			flipCoin(numToss);

		}

		if (userChoice == "D") {
			std::cout << "How many sides does your die have? \n";
			std::cin >> numSide;
			std::cout << "How many times would you care to roll the die? \n";
			std::cin >> numRoll;
			
			rollDice(numSide, numRoll);
		}
		
		if (userChoice == "E")	{
			std::cout << "Goodbye \n";
		}
}




//Flip a coin game
void flipCoin(int numToss) {

	int side1 = 1, side2 = 2, i;
	std::string topSide = "Heads", bottom = "Tails";

	for (i = 0; i < numToss; i++) {
		
		
		if ((int)(1 + rand() % 2) == side1)	{
			std::cout << "Flip " << i + 1  << ":\t " << topSide << std::endl;
		}
		else
		{
			std::cout << "Flip " << i + 1 << ":\t " << bottom << std::endl;
		}		

	}
	
	menu();
}
	//roll a dice function
void rollDice(int numSide, int numRoll) {

	int i;

	for (i = 0; i < numRoll; i++) {
		std::cout << "Roll " << i + 1 << " :\t " << (int)(1 + rand() % numSide) << "\n";
	}
	
	menu();
}
