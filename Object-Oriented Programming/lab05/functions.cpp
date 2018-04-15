#include "Main.h"

///////////////////////////////////////////////////////////////////////
//Urzadzenie - klasa bazowa
Urzadzenie::Urzadzenie(int szer, int wys)
{
	szerokosc=szer;
	wysokosc=wys;
}

void Urzadzenie::Wyswietl(const Zrodlo& zrodlo) const
{
	std::cout << "Poloczono " << nazwa << " i " << zrodlo.PodajNazwe() << std::endl;
}

void Urzadzenie::Wypisz(std::string pomoc) const
{
	for(int i=0; i<wysokosc; i++) //wypisanie na urzadzenie
	{
		for(int j=0; j<szerokosc; j++)
		{
			std::cout << pomoc;
		}
		std::cout << std::endl;
	}
}
///////////////////////////////////////////////////////////////////////
//Monitor
Monitor::Monitor(int szer, int wys) : Urzadzenie(szer, wys)
{
	nazwa="monitor";
}
void Monitor::Wyswietl(const Zrodlo& zrodlo) const
{
	Urzadzenie::Wyswietl(zrodlo);
	Rysuj(zrodlo); //rysowanie ramki
	std::string pomoc=zrodlo.PodajInfo(); //przetrzymuje info do wyswietlenia
	Urzadzenie::Wypisz(pomoc);
	Rysuj(zrodlo); //rysowanie ramki
}

void Monitor::Rysuj(const Zrodlo& zrodlo) const
{
	if(zrodlo.PodajNazwe()=="komputer" || zrodlo.PodajNazwe()=="DVD")
	{
		for(int i=0; i<szerokosc; i++)
			std::cout << "+";
		std::cout << std::endl;
		for(int i=0; i<szerokosc; i++)
			std::cout << "+";
	}
	std::cout << std::endl;
}
///////////////////////////////////////////////////////////////////////
//Rzutnik
Rzutnik::Rzutnik(int szer, int wys) : Urzadzenie(szer, wys)
{
	nazwa="rzutnik";
}
void Rzutnik::Wyswietl(const Zrodlo& zrodlo) const
{
	Urzadzenie::Wyswietl(zrodlo);
	std::string pomoc=zrodlo.PodajInfo(); //przetrzymuje info do wyswietlenia
	Urzadzenie::Wypisz(pomoc);
}
///////////////////////////////////////////////////////////////////////
//TelewizorLCD
TelewizorLCD::TelewizorLCD(int szer, int wys) : Urzadzenie(szer, wys)
{
	nazwa="telewizorLCD";
}
void TelewizorLCD::Wyswietl(const Zrodlo& zrodlo) const
{
	Urzadzenie::Wyswietl(zrodlo);
	std::string pomoc=zrodlo.PodajInfo(); //przetrzymuje info do wyswietlenia
	RysujPoczatek(szerokosc); //rysuje gorna ramke
	Urzadzenie::Wypisz(pomoc);
	RysujKoniec(szerokosc); //rysuje koniec
}
void TelewizorLCD::RysujPoczatek(int szer) const
{
	for(int i=0; i<szer; i++)
		std::cout << "*";
	std::cout << std::endl;
}
void TelewizorLCD::RysujKoniec(int szer) const
{
	for(int i=0; i<szer/2+1; i++)
		std::cout << "* ";
	std::cout << std::endl;
	for(int i=0; i<szer/2; i++)
		std::cout << " &";
	std::cout << std::endl;
	for(int i=0; i<szer/2+1; i++)
		std::cout << "* ";
	std::cout << std::endl;
}


