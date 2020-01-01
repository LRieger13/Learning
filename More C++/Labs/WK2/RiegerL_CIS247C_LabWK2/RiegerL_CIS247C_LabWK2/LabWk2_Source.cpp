/*
Leah Rieger
CIS247C
11/07/2019
Lab Wk 2 - BlackJack
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "Card.h"
#include <vector>	//standard template library [STL]
using namespace std;

// prototypes
string showCards(vector<Card> cards);
short sumCardValues(vector<Card> cards);
void playHand(short &cash);   // & means 'address of' == variable sent 'by reference'

/// Main Method -- Entry point into Application

int main()
{
	
	// set the starting cash amt & display to user
	short cash = 100;
	cout << "Welcome to BlackJack Extreme!" << endl;
	cout << "\nYou are starting with $" << cash << endl;

	// pause
	cout << "\nPress any key to continue...";
	_getch();

	// create loop variable
	short choice = 0;

	// run application loop
	do 
	{
		//menu to get user choice
		system("cls");	// clears console Windows
		cout << "Menu\n" << endl;
		cout << "1) Play a hand" << endl;
		cout << "2) Show Current Balance" << endl;
		cout << "3) Exit" << endl;

		cout << "\nEnter your choice: ";
		cin >> choice;

		// switch based on choice
		switch (choice)
		{
		case 1:
			playHand(cash);
			break;
		case 2:
			cout << "\nYour current cash balance: $" << cash << endl;
			break;
		case 3:
			cout << "\nThanks for playing!" << endl;
			cout << "\nYour final cash amount: $" << cash << endl;
			break;
		default:			//error checking
			cout << "\nError. Please select from the Menu" << endl;
			break;
		}
		//pause
		cout << "\nPress any key to continue...";
		_getch();
	} while (choice != 3);



	return 0;
}

/// Show the cards in the vector(resizable array)
string showCards(vector<Card> cards)
{
	string output = "";
	for (short i = 0; i < cards.size(); i++)
	{
		output += cards[i].toString() + " ";
	}

	return output;
}

/// Add up the total value of the cards
short sumCardValues(vector<Card> cards)
{
	short total = 0;

	for (int i = 0; i < cards.size(); i++)
	{
		total += cards[i].getValue();
	}

	return total;
}


/// Play a single hand
void playHand(short& cash)
{
	// create two ArrayLists to hold Card obj
	// ArrayList = resizeable array; called a 'vector'
	vector<Card> dealerCards;
	vector<Card> playerCards;
	short dealerCardsTotal = 0;
	short playerCardsTotal = 0;

	// get bet amt
	short bet = 0;
	cout << "\nEnter bet amount: ";
	cin >> bet;

	// create 2 cards for dealer & show first one
	Card card1;
	Card card2;
	dealerCards.push_back(card1);	//to push card into vector
	dealerCards.push_back(card2);
	dealerCardsTotal = sumCardValues(dealerCards);	// calls method to total

	cout << "\nDealer is showing: " << dealerCards[0].toString() << endl;

	// create 2 cards for player & show both
	playerCards.push_back(Card());	//anonymous object -- create without reference name, can only get to through vector
	playerCards.push_back(Card());
	playerCardsTotal = sumCardValues(playerCards);

	cout << "\nHere are your cards: " << showCards(playerCards) << endl;

	//give cards to player til they stand (S)
	char answer = '?';

	do
	{
		cout << "\nDo you want to Hit (H) or Stand (S)?";
		cin.sync();  // flush the input stream (keyboard buffer) -- Linux:cin.ignore(100, '\n')
		cin >> answer;
		cin.sync();

		// if player wants to hit
		if (toupper(answer) == 'H')
		{
			// give another card to player
			Card c;
			cout << "\nYou were delt: " << c.toString() << endl;
			playerCards.push_back(c);  // add card to players hand

			// sum up card values
			playerCardsTotal = sumCardValues(playerCards);

			// did player bust
			if (playerCardsTotal > 21)
			{
				// do you have an Ace to flip
				for (int i = 0; i < playerCards.size(); i++)
				{
					if (c.getValue() == 11)
					{
						cout << "\nYour total is: " << playerCardsTotal << endl;
						c.flipAceToOne();
						cout << "\nLooks like you almost bust -- time to flip that Ace!" << endl;
						playerCardsTotal = sumCardValues(playerCards);
						cout << "\nYour new total is: " << playerCardsTotal << endl;

						// if under 21 break loop, if not keep looping
						if (playerCardsTotal <= 21)
						{
							break;
						}
					}
				}
			}

			//show the cards & the total
			cout << "\nHere are your cards: " << showCards(playerCards) << endl;
			cout << "\nYour total is: " << playerCardsTotal << endl;

			//if bust -- stop loop!
			if (playerCardsTotal > 21)
			{
				answer = 'S';
			}
		}

	} while (toupper(answer) != 'S');

	// if player total > 21 player busted - take money away
	if (playerCardsTotal > 21)
	{
		cout << "UHOH! You busted!" << endl;
		cash -= bet;
	}
	else
	{
		// player stands -- dealer hits until 17<
		do
		{
			if (dealerCardsTotal < 17)
			{
				Card c;
				cout << "\nDealer was delt: " << c.toString() << endl;
				dealerCards.push_back(c); // add card to dealers hand
				cout << "\nDealer Cards: " << showCards(dealerCards) << endl;
				dealerCardsTotal = sumCardValues(dealerCards);
				cout << "\nDealer total: " << dealerCardsTotal << endl;
			}

		} while (dealerCardsTotal < 17);

		// show card for both 
		cout << "\nYour Cards: " << showCards(playerCards) << " (" << playerCardsTotal << ") " << endl;
		cout << "\nDealer Cards: " << showCards(dealerCards) << " (" << dealerCardsTotal << ") " << endl;

		// winner winner chicken dinner
		if (dealerCardsTotal > 21)
		{
			cout << "\nDealer Busted!" << endl;
			cash += bet;
		}
		else if (dealerCardsTotal > playerCardsTotal)
		{
			cout << "\nDealer Won!" << endl;
			cash -= bet;
		}
		else if (playerCardsTotal > dealerCardsTotal)
		{
			cout << "\nYou Won!" << endl;
			cash += bet;
		}
		else
		{
			cout << "\nYou pushed the dealer -- It's a TIE!" << endl;
		}
	}

	// show the current cash position
	cout << "\nYour current cash balance: $" << cash << endl;
}