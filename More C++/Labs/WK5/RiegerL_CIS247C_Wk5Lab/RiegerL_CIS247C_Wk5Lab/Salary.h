#pragma once
#include <string>
#include "Employee.h"
using namespace std;

class Salary : public Employee
{
protected:
	// attribute
	double annualSalary = 0;
	
public:
	// define construc/destruc
	Salary(void);
	Salary(double annualSalary);
	~Salary();
	
	// accessor & mutator

	// behavior
	// needs to inherit from employee class
	// calculatePay() method should return annualSalary divided by 52.0f 
	// bc there are 52 weeks in a yr
	double getAnnualSalary(void);
	void setAnnualSalary(double annualSalary);

	float getCalulatePay(void);
	void setCalulatePay(float caluclatePay);
};

