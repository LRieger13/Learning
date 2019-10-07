// ---------------------------------------------------------------
// Programming Assignment:	LAB3A
// Developer:			Leah Rieger
// Date Written:		07/25/2019
// Purpose:				Salsa Sales Program 
// ---------------------------------------------------------------
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//declare your arrays, highest & lowest seller index
	int i = 0, totalSales = 0, temp = 0, prevBest = 0, prevWorst = 1000;
	char highSeller{};
	char lowSeller{};
	string highSellerName = "name", lowSellerName = "name";
	string salsaTypes[7] = { "Mild", "Medium","Hot","Sweet","Fruit","Verde","Zesty" };
	int jarsSold[7] = {};

	//Insert brief descriptor of what program is going to run here

	cout << "Welcome to the Salsa Sales Report Generator!\n";
	cout << "When prompted enter the amount sold from each type of salsa. \n";
	cout << "Afterwards, you will receive a report with the total sales, highest seller and lowest seller salsa for the month.\n";
	cout << "                                                 \n";
	cout << "Let's begin\n";
	cout << "                                                 \n";
	cout << "                                                 \n";

	//Display Sales Report Header
	cout << "\t Salsa Sales Input\n";
	cout << "__________________________________\n";
	cout << "                                    \n";
	
	//for loop going through and printing out the sales of different salsas appending to jarsSold[] 
	
	for (i = 0; i < 7; i++) {
		
		cout << "Jars sold last month of " << salsaTypes[i] << " : " << endl;
		cin >> jarsSold[i];
		totalSales += jarsSold[i];
		//while loop to check user input that its above 0
		while (jarsSold[i] < 0) {
			cout << "Please enter a value greater than 0!" << endl;
		}
	}

	//Display header for the report section
	cout << "                                    \n";
	cout << "                                    \n";
	cout << "\t Salsa Sales Report\n";
	cout << "                                  \n";
	cout << "Name\t\tJars Sold\n";
	cout << "__________________________________\n";
	cout << "                                    \n";

	//another loop to calculate total jars sold, test for low & high sales products
	for (i = 0; i < 7; i++) {
		cout << salsaTypes[i] << "\t : \t" << jarsSold[i] << endl;

		if (jarsSold[i] > prevBest) {
			prevBest = jarsSold[i];
			highSellerName = salsaTypes[i];
		}
		if (jarsSold[i] < prevWorst) {
			prevWorst = jarsSold[i];
			lowSellerName = salsaTypes[i];
		}
	}

	//display sales for each type of salsa, total sales, salsa with highest and lowest sales
	cout << "                                    \n";
	cout << "Total Sales: \t" << totalSales << endl;
	cout << "                                    \n";
	cout << "Low Seller: \t" << lowSellerName << endl;
	cout << "                                    \n";
	cout << "High Seller: \t" << highSellerName << endl;

	system("pause");
}
