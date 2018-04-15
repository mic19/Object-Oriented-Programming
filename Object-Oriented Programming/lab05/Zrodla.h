#pragma once
#include<string>

//////////////////////////////////////////////////////// zrodla sygnalu
class Zrodlo
{
	public:
	std::string PodajNazwe() const; //podaje rodzaj zrodla
	std::string PodajInfo() const; //zwraca informacje do wyswietlenia

	protected:
	std::string nazwa;
	std::string informacja; //informacja do wyswietlenia na urzadzeniu

};

class Komputer : public Zrodlo //dziedziczy nazwe i informacje do wyswietlenia
{
	public:
	Komputer(); //ustawia nazwe na komputer

	protected:

};

class OdtwarzaczDVD : public Zrodlo //dziedziczy nazwe i informacje do wyswietlenia
{
	public:
	OdtwarzaczDVD(); //ustawia nazwe na DVD

	protected:

};
