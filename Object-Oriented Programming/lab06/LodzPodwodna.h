// ten plik MOZNA modyfikowac

#pragma once

#include "Statek.h"

class LodzPodwodna : public StatekSilnikowy
{
public:
	virtual void WypiszInformacje () const;
	void UstawMaksymalneZanurzenie(float);

protected:
	float m_zanurzenieMax;
};

