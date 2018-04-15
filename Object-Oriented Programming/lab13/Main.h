#pragma once
#include<cmath>

//calss representing point
class Point2D
{
	public:
	//constructor makes object from 2 coordinate x and y. assigns value of lenght
	Point2D(int a, int b) {x=a; y=b; lenght=sqrt(pow(x,2)+pow(y,2));};
	//prints both coordinate and distance from origin
	void Print() const;
	//prints both coordinates and distance from origin of given object
	static void PrintPoint(const Point2D point);
	//prints y coordinate of given object
	static int FunctionPrintY(const Point2D& point);
	//operator < return true when distance from origin of this object is less 
	//than distance of given object
	bool operator< (const Point2D& point) const;
	//getters
	float getLenght() const {return lenght;};
	int getX() const {return x;};
	int getY() const {return y;};

	protected:
	int x;
	int y;
	//distace from (0,0)
	float lenght;

};

//class used to put Point2D object using x coordinate - ascending
class OrderAscX
{
	public:
	bool operator()(const Point2D& a, const Point2D& b) const;

	protected:

};

//class used to put Point2D object using y coordinate - descending
class OrderDescY
{
	public:
	bool operator()(const Point2D& a, const Point2D& b) const;

	protected:

};

//returns true when distance from origin of a is greater of b
bool MaxDistanceAsc(const Point2D& a, const Point2D& b);

//prints only x coordinate
int FunctionPrintX(const Point2D& point);

