#pragma once
#include <string>
#include "Salary.h"
using namespace std;

class Manager : public Salary
{
private:
	// attribute
	double bonus;

public:
	// define construc/destruc
	Manager(void);
	Manager(double bonus);
	~Manager();

	// accessor & mutator

	// behavior
	double getBonus(void);
	void setBonus(double bonus);

	float getCalulatePay(void);
	void setCalulatePay(float caluclatePay);
};

