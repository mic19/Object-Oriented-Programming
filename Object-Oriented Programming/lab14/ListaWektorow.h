#pragma once
#include "Wektor2D.h"
#include<list>
#include<vector>

class ListaWektorow
{
	public:
	//domyslnie lista jest nieposortowana. nawet jesli dane sa posortowane
	ListaWektorow() {stan="Nieposortowana";};
	//dodanie zmienia stan na nieposortowane
	void Dodaj(Wektor2D * vector);
	//wypisuje stan i wszystkie elementy
	void Wypisz();
	//sortuje wedlug x i zmienia stan
	void PosortujWedlugX();
	//sortuje wedlug y i zmienia stan
	void PosortujWedlugY();

	protected:
	std::vector<Wektor2D*> lista;
	//stan = nieposortowane, posortowane wedlug x, posortowane wedlug y
	std::string stan;

};


