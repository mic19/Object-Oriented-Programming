#include "Kobieta.h"
#include "Mezczyzna.h"
#include "Postac.h"

//klasa Postac
std::ostream& operator<<(std::ostream& stream, const Postac& postac)
{
	stream << postac.wypisz() << postac.podajWiek() << ".";
	return stream;
}

const char * Postac::wypisz() const
{
	return "Postac ma ";
}

//klasa Kobieta
const char * Kobieta::wypisz() const
{
	return "Kobieta w wieku ";
}

//klasa Leela
const char * Leela::wypisz() const
{
	return "Leela ";
}

//klasa Mezczyzna
const char * Mezczyzna::wypisz() const
{
	return "Wiek mezczyzny to ";
}

//klasa Fry
const char * Fry::wypisz() const
{
	return "Fry ma ";
}


