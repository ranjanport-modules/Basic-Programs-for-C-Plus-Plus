//============================================================================
// Name        : cpp-code-challenge-Access_Specifiers.cpp
// Author      : Aman Ranjan
// Version     :
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

class person
{
protected:
	string phonenumber;

public:
	string fullname;

	void setphonenumber(string phonenumber)
	{
		this->phonenumber = phonenumber;
	}
};

class Employee : public person
{
private:
	float salary;

public:
	void addbous(float bonus)
	{
		this->salary = this->salary + bonus ;
	}

public:
	int id;
	void setsalary(float salary)
	{
		this->salary = salary;
	}

	void displaysalary()
	{
		cout << "current salary: " << salary <<endl;
	}


};

int main()
{
	setbuf(stdout,NULL);

	Employee employee;
	employee.id = 1;
	employee.fullname = "Aman Ranjan";
	employee.setphonenumber("93949596979899");
	employee.setsalary(34000);
	employee.addbous(40000);
	employee.displaysalary();

	return 0;
}
