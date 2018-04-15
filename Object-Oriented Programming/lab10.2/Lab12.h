#pragma once
#include<ostream>

//unit class
template<int pow>
class Unit
{
	public:
	Unit(double val) {value=val;};
	Unit<pow> () {value=0;};
	//mulitply
	template<int n>
	Unit<pow+n> operator*(Unit<n> obj) {return Unit<pow+n>(value*obj.getValue());};
	//add
	Unit<pow> operator+(Unit<pow> obj) {return Unit<pow>(value+obj.getValue());};
	//divide
	template<int n>
	Unit<pow-n> operator/(Unit<n> obj) {return Unit<pow-n>(value/obj.getValue());};
	//contract
	Unit<pow> operator-(Unit<pow> obj) {return Unit<pow>(value-obj.getValue());};
	//getters
	double getValue() const {return value;};
	int getPower() const {return power;};

	protected:
	double value;
	static int power;

};

//initialize static member of template class
template<int pow>
int Unit<pow>::power=pow;

//overloaded << operator. gives to stream value and power
template<int pow>
std::ostream& operator<<(std::ostream& stream, Unit<pow> obj)
{
	stream << obj.getValue() << " m^" << obj.getPower();
	return stream;
}

typedef Unit<1> Metr;
typedef Unit<2> MetrKwadratowy;
typedef Unit<3> MetrSzescienny;


