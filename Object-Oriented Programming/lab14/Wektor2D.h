#pragma once
#include<string>

//klasa reprezentujaca wektor
class Wektor2D
{
	public:
	//pierwszy argument konstruktora to nazwa, drugi to wspolrzedna x, trzeci to y
	Wektor2D(std::string str, int a, int b)
	{
		nazwa=str;
		x=a;
		y=b;
	};

	Wektor2D(const Wektor2D& wektor)
	{
		nazwa=wektor.PodajNazwe();
		x=wektor.PodajX();
		y=wektor.PodajY();
	}

	//funkcja wypisuje nazwe, wpolrzedna x i wspolrzedna y
	void Wypisz() const;
	//zwraca wspolrzedna x
	int PodajX() const {return x;}
	//zwraca wspolrzedna y
	int PodajY() const {return y;}
	std::string PodajNazwe() const {return nazwa;}
	void ZamienX(int a) const {x=a;}

	protected:
	std::string nazwa;
	mutable int x;
	mutable int y;

};

//operator porownania potrzebny w zbiorze set. 
bool operator<(const Wektor2D& a, const Wektor2D& b);

//funkcje porownujace 2 wektory
bool PorownajPoX(Wektor2D* const a, Wektor2D* const b);

bool PorownajPoY(Wektor2D* const a, Wektor2D* const b);


