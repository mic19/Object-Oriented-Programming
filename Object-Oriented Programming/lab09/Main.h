#pragma once

#include "Pomieszczenie.h"

template<void (Pomieszczenie::*wsk)() const>//, class T>
void Lokaj(Pomieszczenie& obiekt)
{
	std::cout << "Pomieszczenie " << obiekt.podajNazwe();
	(obiekt.*wsk)();
}

template<int l, class T>
void Lokaj(T obiekt)
{
	std::cout << "Nic nie robie." << std::endl;
}

template<void (Pomieszczenie::*wsk)() const>//, class T>
void Lokaj(const Pomieszczenie& obiekt)
{
	std::cout << "Pomieszczenie " << obiekt.podajNazwe() << " jest zamkniete." << std::endl;
}


