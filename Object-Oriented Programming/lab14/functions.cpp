#include "Main.h"
#include<algorithm>

//statyczna zmienna uzywana w funkcji DzialaniaNaZbiorach::WypiszWiekszeOd
int DzialaniaNaZbiorach::granica = 0;

//porownanie dwoch wektorow - potrzebne w zbiorze set
bool operator<(const Wektor2D& a, const Wektor2D& b)
{
	if(a.PodajX() < b.PodajX())
		return true;
	else return false;
}

///////////////////////////////////////////////////////////////////
//funkcje klasy ListaWektorow
void ListaWektorow::Dodaj(Wektor2D * wektor)
{
	stan="Nieposortowane";
	lista.push_back(wektor);
}

void ListaWektorow::Wypisz()
{
	std::cout << stan << std::endl;
	std::vector<Wektor2D*>::iterator iter=lista.begin();
	for(; iter!=lista.end(); iter++)
	{
		(*iter)->Wypisz();
	}

}

void ListaWektorow::PosortujWedlugX()
{
	stan="Posortowana wedlug wsprzednych X";
	sort(lista.begin(), lista.end(), PorownajPoX);
}

void ListaWektorow::PosortujWedlugY()
{
	stan="Posortowana wedlug wsprzednych Y";
	sort(lista.begin(), lista.end(), PorownajPoY);
}

////////////////////////////////////////////////////////////////////
//funkcje klasy Wektor2D
void Wektor2D::Wypisz() const
{
	std::cout << nazwa << " (" << x << ", " << y << ")" << std::endl;
}

//funkcje porownujace 2 wektory przekazane wskaznikami
bool PorownajPoX(Wektor2D* const a, Wektor2D* const b)
{
	return a->PodajX()<b->PodajX();
}

bool PorownajPoY(Wektor2D* const a, Wektor2D* const b)
{
	return a->PodajY()<b->PodajY();
}


