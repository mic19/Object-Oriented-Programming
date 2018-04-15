#pragma once
#include<string>
#include "OutOfRange.h"

class Number
{
	public:
	Number(std::string, double value); //constructor sets name and value of object
	~Number(); //writes info in console
	static void SetRange(double, double); //sets static values which determine the range the value could be in
	static Number * Factory(std::string, double); //returns pointer to Number created using above constructor. arguments mean the same
	void Print(); //prints name and value

	//static values to make the range
	static double lowBorder;
	static double upBorder;

	protected:
	std::string name;
	double value;
};


