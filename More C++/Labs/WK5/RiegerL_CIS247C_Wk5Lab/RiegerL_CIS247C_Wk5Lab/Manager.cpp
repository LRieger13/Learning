#include "Employee.h"
#include "Manager.h"
#include "Hourly.h"
#include "Salary.h"
#include <string>
using namespace std;

/// Constructors
Manager::Manager(void)
{
	setBonus(0.0f);
}

Manager::Manager(double bonus)
{

}

/// Destructors
Manager::~Manager()
{

}

/// Behaviors
// access & mutator

// behavior
double Manager::getBonus(void)
{
	return ((annualSalary + bonus) / 52); 
}

void Manager::setBonus(double bonus)
{
	// make sure the bonus is not neg
	if (bonus > 0)
	{
		this->bonus = bonus;
	}
	else
	{
		this->bonus = 0.0f;
	}
}


// Manager class needs to inherit from Salary Class
// CalculatePay() should use the salary's calculatePay() + bonus / 52.0f (base pay + bonus)
float Manager::getCalulatePay(void)
{
	return Salary::calculatePay + bonus / 52;
}

void Manager::setCalulatePay(float calculatePay)
{
	// used to make sure pay is not neg
	if (calculatePay > 0.0f)
	{
		this->calculatePay = calculatePay;
	}
	else
	{
		this->calculatePay = 0.0f;
	}
}