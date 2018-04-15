#include "Main.h"
#include<iostream>

///////////////////////////////////////////////////////////////
//class Number

//static members
double Number::lowBorder=1;
double Number::upBorder=1;
OutOfRange exception(Number::lowBorder, Number::upBorder);

Number::Number(std::string str, double val)
{
	name=str;
	value=val;
}

Number::~Number()
{
	std::cout << "Destroying number " << value << std::endl;
}

void Number::SetRange(double a, double b)
{
	Number::lowBorder=a;
	Number::upBorder=b;
}

//static function
Number * Number::Factory(std::string str, double val)
{
	std::cout << "Manufacturing number " << val << std::endl;
	Number * pointer=new Number(str, val);
	exception.addNumber(pointer);
	exception.set(val, Number::lowBorder, Number::upBorder);

	if(val<Number::lowBorder || val>Number::upBorder)
	{
		throw exception;
	}
	return pointer;
}

void Number::Print()
{
	std::cout << name << " = " << value << std::endl;
}


