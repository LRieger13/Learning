// ---------------------------------------------------------------
// Programming Assignment:	LAB1C
// Developer:			Leah Rieger
// Date Written:		07/11/2019
// Purpose:				Payroll Program 
// ---------------------------------------------------------------

#include <iomanip>
#include <iostream>
using namespace std;

void main()
{
	cout << "Box Office Program\n";

	int child, adult; //declare varibles, price const
	float  netProfit, distributeTotal, grossProfit;
	const float theater = 0.20, kidPrice = 6.00, adultPrice = 10.00; //declare float var

																	 //inputs
	cout << "Please enter the number of child tickets sold: \n";
	cin >> child;
	cout << "Please enter the number of adult tickets sold: \n";
	cin >> adult;
	cout << "                                                     \n";
	cout << "                                                      \n";

	//processing
	grossProfit = (child * kidPrice) + (adult * adultPrice); //calculating how much made total
	netProfit = theater * grossProfit; //calculating the total multiplied by theater %
	distributeTotal = grossProfit - netProfit; //calculating how much goes to distributor


											   //outputs
	cout << "Gross Box Office Profit:\t $" << fixed << setprecision(2) << grossProfit << endl;
	cout << "Net Box Office Profit:\t\t $" << fixed << setprecision(2) << netProfit << endl;
	cout << "Amount Paid to Distributor:\t $" << fixed << setprecision(2) << distributeTotal << endl;
	system("pause");

}