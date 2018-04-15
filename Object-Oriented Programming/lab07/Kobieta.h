#pragma once

#include "Postac.h"

class Kobieta : public Postac
{
	public:
	Kobieta(int w) : Postac(w) {};
	virtual const char * wypisz() const;

	protected:

};

class Leela : public Kobieta
{
	public:
	Leela(int w) : Kobieta(w) {};
	virtual const char * wypisz() const;

	protected:

};


