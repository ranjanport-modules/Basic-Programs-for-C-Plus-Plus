//============================================================================
// Name        : cpp-code-challenge-inheritance.cpp
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
public:
		int id;
		int age;
		string fullname;
		string phonenumber;
};

class Student : public person
{
public:

	string schoolname;

	void study()
	{
		cout << "studying" << endl;
	}

};

class Employee : public person
{
public:

	string companyname;

	void work()
	{
		cout << "Working" << endl;
	}
};

int main()
{
	setbuf(stdout,NULL);

	return 0;
}
