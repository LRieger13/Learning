#pragma once
#include <string>
using namespace std;

class Employee
{
protected:
	// attribute
	string fName;
	string lName;
	string ssn;
	string phone;

public:
	// define construc/destruc
	Employee(void);
	Employee(string fName, string lName, string ssn, string phone, float calculatePay);
	virtual ~Employee();

	// accessor & mutator
	virtual string toString(void);
	float calculatePay;

	// behavior
	virtual float getCalculatePay(void);
	void setCalculatePay(float calculatePay);

	string getFName(void);
	void setFName(string fName);

	string getLName(void);
	void setLName(string lName);

	string getSSN(void);
	void setSSN(string ssn);

	string getPhone(void);
	void setPhone(string phone);
};

