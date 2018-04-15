#pragma once

#include "Postac.h"

class Mezczyzna : public Postac
{
	public:
	Mezczyzna(int w) : Postac(w) {};
	virtual const char * wypisz() const;

	protected:

};

class Fry : public Mezczyzna
{
	public:
	Fry(int w) : Mezczyzna(w) {};
	virtual const char * wypisz() const;

	protected:

};


