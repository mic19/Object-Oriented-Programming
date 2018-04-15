#include "Pomieszczenie.h"

//klasa Pomieszczenie

Pomieszczenie::Pomieszczenie(std::string podanaNazwa)
{
	nazwa=podanaNazwa;
	std::cout << "Tworze pomieszczenie: " << nazwa << std::endl;
}

void Pomieszczenie::zetrzyj_kurze() const
{
	std::cout << "Scieram kurze w pomieszczeniu: " << nazwa << std::endl;
}

void Pomieszczenie::umyj_podloge() const
{
	std::cout << "Myje podloge w pomieszczeniu: " << nazwa << std::endl;
}

void Pomieszczenie::odkurz() const
{
	std::cout << "Odkurzam pomieszczenie: " << nazwa << std::endl;
}

std::string Pomieszczenie::podajNazwe() const
{
	return nazwa;
}


