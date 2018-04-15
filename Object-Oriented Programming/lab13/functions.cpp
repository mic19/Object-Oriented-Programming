#include "Main.h"
#include<iostream>

//global functions
bool MaxDistanceAsc(const Point2D& a, const Point2D& b)
{
	if(a.getLenght() < b.getLenght())
		return 1;
	else return 0;
}

int FunctionPrintX(const Point2D& point)
{
	std::cout << "Function print x=" << point.getX() << std::endl;
	return point.getX();
}

//////////////////////////////////////////////////////////////
//member function of OrderAscX
bool OrderAscX::operator()(const Point2D& a, const Point2D& b) const
{
	return (a.getX() < b.getX());
}

//////////////////////////////////////////////////////////////
//member function of OrderAscY
bool OrderDescY::operator()(const Point2D& a, const Point2D& b) const
{
	return (a.getY() > b.getY());
}

//////////////////////////////////////////////////////////////
//member functions of Point2D
//operator <
bool Point2D::operator< (const Point2D& point) const
{
	return lenght<point.getLenght();
};

//printing functions
void Point2D::PrintPoint(const Point2D point)
{
	std::cout << "Point coordinates (" << point.getX() << ", " << point.getY() <<  ") distance from origin: " << point.getLenght() << std::endl;
}

void Point2D::Print() const
{
	std::cout << "Point coordinates (" << x << ", " << y <<  ") distance from origin: " << lenght << std::endl;
}

int Point2D::FunctionPrintY(const Point2D& point)
{
	std::cout << "Function print y=" << point.getY() << std::endl;
	return point.getY();
}
