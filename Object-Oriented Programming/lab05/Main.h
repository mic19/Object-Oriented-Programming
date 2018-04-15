#pragma once

#include<iostream>
#include<string>
#include "Zrodla.h"

//klasa bazowa
class Urzadzenie
{
	public:
	Urzadzenie(int, int); //konstruktor ustawia kolejno szerokosc i wysokosc urzadzenia
	void Wyswietl(const Zrodlo&) const; //wyswietla informacje o poloczonych urzadzeniach
	void Wypisz(std::string) const; //wypisuje na ekran informacje ktora jest podana w zrodle

	protected:
	std::string nazwa; //nazwa urzadzenia - sluzy do rozpoznania rodzaju
	int szerokosc;
	int wysokosc;
};

///////////////////////////////////////////////////////////////////////////////
//klasy dzidziczace po Urzadzeniu

class Monitor : public Urzadzenie //Monitor dziedziczy po urzadzeniu, bo ptrzebuje rozmiary, nazwe i korzysta z funkcji wyswietlajace (wewnatrz Wyswietl)
{
	public:
	Monitor(int, int); //argumenty to kolejno szerokosc i wysokosc przekazane do konstruktora bazowego
	void Wyswietl(const Zrodlo&) const; //nadpisuje Wyswietl z klasy bazowej ale wewnatrz korzysta z niej

	protected:
	void Rysuj(const Zrodlo&) const; //rysuje ramki w zaleznosci od zrodla

};

class Rzutnik : public Urzadzenie //dziedziczy rozmiary i nazwe, a takze korzysta z funkcji wyswietl
{
	public:
	Rzutnik(int, int); //argumenty to kolejno szerokosc i wysokosc przekazane do konstruktora bazowego
	void Wyswietl(const Zrodlo&) const; //korzysta z funkcji bazowej Wyswietl i wywoluje Wypisz

	protected:

};

class TelewizorLCD : public Urzadzenie //dziedziczy rozmiary i nazwe, a takze korzysta z funkcji wyswietl
{
	public:
	TelewizorLCD(int, int); //argumenty to kolejno szerokosc i wysokosc przekazane do konstruktora bazowego
	void Wyswietl(const Zrodlo&) const; //korzysta z funkcji bazowej Wyswietl i wywoluje Wypisz i dodaje pewne rzeczy

	protected:
	void RysujPoczatek(int) const; //ramka na gorze
	void RysujKoniec(int) const; //ramka na dole

};

