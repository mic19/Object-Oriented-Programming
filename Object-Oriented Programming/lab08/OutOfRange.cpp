#include "OutOfRange.h"
#include "Main.h"
#include<iostream>

std::vector<Number *> array; //global vector of pointers to delete in exception

OutOfRange::OutOfRange(double val, double low, double up)
{
	value=val;
	lowBorder=low;
	upBorder=up;
}

OutOfRange::OutOfRange(double low, double up)
{
	lowBorder=low;
	upBorder=up;
}

OutOfRange::~OutOfRange()
{
	for(unsigned int i=0; i<array.size(); i++)
	{
		delete array.back();
		array.pop_back();
	}
}

void OutOfRange::set(double val, double low, double up)
{
	value=val;
	lowBorder=low;
	upBorder=up;
}

void OutOfRange::addNumber(Number * pointer)
{
	array.push_back(pointer);
}

std::ostream& operator<<(std::ostream& stream, const OutOfRange& exception)
{
	stream << "Number named: highest has value " << exception.getValue() << " which is outside of the allowed range: [" << exception.getLowBorder() << ", " << exception.getUpBorder() << "]" << std::endl;
	return stream;
}


