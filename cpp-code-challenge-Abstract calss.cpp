//============================================================================
// Name        : cpp-code-challenge-Abstract.cpp
// Author      : Aman Ranjan
// Version     :
// Copyright   : This code is freeware and can be used without prior notice.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <string>
#include <new>
using namespace std;

#include <iostream>
using namespace std;

class Shape {        // Should act like an abstract class or interface.

public:
   virtual void getarea() = 0 ;
   virtual void getperimeter() = 0 ; /* Define two pure virtual functions: getArea() and getPerimeter(). */
};

class Square : public Shape
{
public:
    float side;
    virtual void getarea()
    {
    	cout <<side*side <<endl;
    }

    virtual void getperimeter()
    {
    	cout << 4 * side << endl;
    }

};

class Rectangle : public Shape
{
public:
	float length;
	float breadth;
	    virtual void getarea()
	    {
	    	cout << length * breadth << endl;
	    }

	    virtual void getperimeter()
	    {
	    	cout << 2*(length * breadth)<< endl;
	    }

};

class Circle : public Shape
{
public:
	float radius;
	//static float pi=3.14;
	    virtual void getarea()
	    {
	    	cout << 3.14 * (radius * radius)<< endl;
	    }

	    virtual void getperimeter()
	    {
	    	cout << 2 * 3.14 * radius<< endl;
	    }

   };

class Triangle : public Shape
{
public:
	float side1;
	float side2;
	float height;
	float base;
	    virtual void getarea()
	    {
	    	cout << 0.5 * base *height <<endl;
	    }

	    virtual void getperimeter()
	    {
	    	cout << side1 + side2 +base <<endl;
	    }

};


int main() {

Square sq;
sq.side = 4.2;
sq.getperimeter();
sq.getarea();


    return 0;
}

