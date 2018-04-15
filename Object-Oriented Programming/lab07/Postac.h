#pragma once
#include<ostream>

class Postac
{
	public:
	Postac(int w) {wiek=w;};
	virtual const char * wypisz() const;
	int podajWiek() const {return wiek;};
	virtual ~Postac() {};

	protected:
	int wiek;

	//friend std::ostream& operator<<(std::ostream&, const Postac&);

};

std::ostream& operator<<(std::ostream&, const Postac&);


