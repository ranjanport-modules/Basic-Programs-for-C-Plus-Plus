//============================================================================
// Name        : cpp-code-challenge-Taking_user_input.cpp
// Author      : Aman Ranjan
// Version     :
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Program to take input from user in cpp.
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	setbuf(stdout,NULL);

	string name;
	char dollar;
	float gdp;
	int year;

	cout << "Enter the name of Country:";
	getline(cin,name);

	cout << "\nInput the currency type : ";
	cin >> dollar;

	cout << "\nEnter the amount of money for GDP: " ;
	cin >> gdp;

	cout << "Enter the Year : ";
	cin >> year;


	cout << "As economic reforms picked up the pace, "<<name<< "'s GDP grew five-fold to reach US"
				<<dollar<<gdp<< " trillion in "<<year<<"(as per IMF estimates)."  << endl;						 // prints First c++ Program to print variable inputs.

	return 0;
}
