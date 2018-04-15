#pragma once
#include<ostream>
#include<vector>

class Number;

class OutOfRange
{
	public:
	OutOfRange() {}; //basic constructor stes counter of pointers to delete to 0
	OutOfRange(double, double, double); //sets in order, value, lowBorder, upBorder
	OutOfRange(double , double); //sets lowBorder and upBorder
	~OutOfRange(); //takes care of deleting pointers
	void set(double, double, double); //sets the same values as third constuctor
	double getValue() const {return value;};
	double getLowBorder() const {return lowBorder;};
	double getUpBorder() const {return upBorder;};
	void addNumber(Number *); //adds pointer to object to delete in case of exception

	protected:
	double value; //stores current value - it is between lowBorder and upBorder (otherwise throw exception)
	double lowBorder; //lower border of range
	double upBorder; //upper border of range

};

std::ostream& operator<<(std::ostream& stream, const OutOfRange& exception);


