#include "Main.h"
#include "Zrodla.h"

//////////////////////////////////////////////////////////////////////
//Zrodlo - funkcja bazowa
std::string Zrodlo::PodajNazwe() const
{
	return nazwa;
}

std::string Zrodlo::PodajInfo() const
{
	return informacja;
}

//klasy dziedziczace po zrodle
//Komputer
Komputer::Komputer()
{
	nazwa="komputer";
	informacja="K";
}

//OdtwarzaczDVD
OdtwarzaczDVD::OdtwarzaczDVD()
{
	nazwa="DVD";
	informacja="D";
}


