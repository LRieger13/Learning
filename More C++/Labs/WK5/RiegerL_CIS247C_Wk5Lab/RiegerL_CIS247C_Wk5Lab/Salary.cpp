#include "Employee.h"
#include "Manager.h"
#include "Hourly.h"
#include "Salary.h"
#include <string>
using namespace std;

/// Constructors
// default
Salary::Salary()
{
	setAnnualSalary(0.0f);
	setCalculatePay(0.0f);
}

// parameterized
Salary::Salary(double annualSalary)	// need to inherit from Employee
{
	setAnnualSalary(annualSalary);
	setCalulatePay(calculatePay);
}

/// Destructors
Salary::~Salary()
{

}

/// Behaviors

double Salary::getAnnualSalary(void)
{
	return annualSalary;
}

void Salary::setAnnualSalary(double annualSalary)
{
	// checks that salary isn't neg
	if (annualSalary > 0.0f)
	{
		this->annualSalary = annualSalary;
	}
	else
	{
		this->annualSalary = 0.0f;
	}
}

float Salary::getCalulatePay(void)
{
	// return annualSalary divided by 52.0f 
	return annualSalary / 52.0;
}

void Salary::setCalulatePay(float caluclatePay)
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