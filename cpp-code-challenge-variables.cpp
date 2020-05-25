//============================================================================
// Name        : code-challenge-variable-print-method.cpp
// Author      : Aman Ranjan
// Version     :
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	setbuf(stdout,NULL);

	string country= "India\'";
	float money = 2.2;
	char currency = '$';
	int year= 2015;

	cout << "As economic reforms picked up the pace, "<<country<< "s GDP grew five-fold to reach US"
			<<currency<<money<< " trillion in "<<year<<"(as per IMF estimates)."  << endl;						 // prints First c++ Program to print variable inputs.

	return 0;
}
