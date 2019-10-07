// ---------------------------------------------------------------
// Programming Assignment:	LAB2B
// Developer:			Leah Rieger
// Date Written:		07/17/2019
// Purpose:			Calories Burned Program 
// ---------------------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	const double calPerMin = 3.9; //declare varibles, constant calories burned
	double i, caloriesBurned; 
	cout << "Welcome to the Calorie Counter \n"; // description
	
	for (i = 10; i <= 30; i += 5) { // for loop, repitition construct begins
		// starts at 10, goes til 30, in increments of 5 min
		caloriesBurned = i * calPerMin; // calculation
		// output of loop
		cout << caloriesBurned << " calories were burned after " << i << " minutes. \n" << endl;
	}
	system("pause");


}
