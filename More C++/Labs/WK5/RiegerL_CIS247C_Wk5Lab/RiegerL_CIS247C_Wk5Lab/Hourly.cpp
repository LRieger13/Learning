#include "Employee.h"
#include "Manager.h"
#include "Hourly.h"
#include "Salary.h"
#include <string>
using namespace std;

/// Constructors
// default
Hourly::Hourly()
{
	setHours(0.0f);
	setRate(0.0f);
	setCalculatePay(0.0f);
}

// parameterized
Hourly::Hourly(float hours, float rate, float calculatePay) 
{
	setHours(hours);
	setRate(rate);
	setCalculatePay(calculatePay); // need to inherit from Employee
}

/// Destructors
Hourly::~Hourly()
{

}

/// Behaviors

// behavior
float Hourly::getCalulatePay(void)
{
	return rate * hours;
}

void Hourly::setCalulatePay(float caluclatePay)		
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
	// calculatePay() methodreturn pay based on number of hours worked & pay rate; 
	// remember to calculate overtime
}

float Hourly::getHours(void)
{
	return hours;
}

void Hourly::setHours(float hours)
{
	if (hours > 0.0f)
	{
		this->hours = hours;
	}
	else
	{
		this->hours = 0.0f;
	}
}

float Hourly::getRate(void)
{
	return rate;
}

void Hourly::setRate(float rate)
{
	if (rate > 0.0f)
	{
		this->rate = rate;
	}
	else
	{
		this->rate = 0.0f;
	}
}