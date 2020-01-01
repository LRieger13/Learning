#include "Employee.h"
#include "Manager.h"
#include "Hourly.h"
#include "Salary.h"
#include <string>
using namespace std;

/// Constructors
// default
Employee::Employee(void)
{
	setFName("");
	setLName("");
	setSSN("");
	setPhone("");
	setCalculatePay(0.0f);
	
}

// parameterized
Employee::Employee(string fName, string lName, string ssn, string phone, float calculatePay)
{
	setFName(fName);
	setLName(lName);
	setSSN(ssn);
	setPhone(phone);
	setCalculatePay(calculatePay);
}

/// Destructors
Employee::~Employee()
{

}

/// Behaviors
// to string convert
	// accessor & mutator
string Employee::toString(void)
{
	string strCalculatePay = to_string(calculatePay);
	strCalculatePay = strCalculatePay.substr(0, 4);	//substring
	return "Your pay is: $" + strCalculatePay;
}

// behavior
float Employee::getCalculatePay(void)
{
	return calculatePay;
}

void Employee::setCalculatePay(float calculatePay)
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

string Employee::getFName(void)
{
	return fName;
}

void Employee::setFName(string fName)
{
	// checking that name was input
	if (fName.length() > 0)
	{
		this->fName = fName;
	}
	else
	{
		this->fName = "unknown";
	}
}

string Employee::getLName(void)
{
	return lName;
}

void Employee::setLName(string lName)
{
	// checking that name was input
	if (lName.length() > 0)
	{
		this->lName = lName;
	}
	else
	{
		this->lName = "unknown";
	}
}

string Employee::getSSN(void)
{
	return ssn;
}
void Employee::setSSN(string ssn)
{
	// checking that the ssn is valid
	if ((ssn.length() == 9) || (ssn.length() == 11))
	{
		this->ssn = ssn;
	}
	else
	{
		this->ssn = "unknown";
	}
}

string Employee::getPhone(void)
{
	return phone;
}

void Employee::setPhone(string phone)
{
	// checking that the phone number valid
	if ((phone.length() > 9) && (phone.length() < 11))
	{
		this->phone = phone;
	}
	else
	{
		this->phone = "unknown";
	}
}