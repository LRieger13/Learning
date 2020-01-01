#pragma once
#include <string>
using namespace std;


class Hourly : public Employee
{
private:
	// attribute
	float hours;
	float rate;
	
public:
	// define construc/destruc
	Hourly(void);
	Hourly(float hours, float rate, float calculatePay);
	~Hourly();

	// accessor & mutator

	// behavior
	// hourly class needs to inherit from employee class
	// calculatePay() method should return pay based on number of hours worked * pay rate
	// remember to calculate overtime
	float getCalulatePay(void);
	void setCalulatePay(float caluclatePay);

	float getHours(void);
	void setHours(float hours);

	float getRate(void);
	void setRate(float rate);
};

