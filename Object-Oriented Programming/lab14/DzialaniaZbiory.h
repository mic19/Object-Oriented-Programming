#pragma once
#include<set>
#include<algorithm>
#include<iostream>

class WiekszeX
{
	public:
	void WiekszeOd() {};
	int granica;

};

class DzialaniaNaZbiorach
{
	public:
	DzialaniaNaZbiorach(std::set<Wektor2D>& podanyZbior) {
		zbior=podanyZbior;
	}

	//wypisuje wieksze od zadanej granicy
	void WypiszXWiekszeOd(int granica)
	{
		DzialaniaNaZbiorach::granica = granica;
		for_each(zbior.begin(), zbior.end(), DzialaniaNaZbiorach::WiekszeXOd);
	}

	void ZamienX(int a, int b)
	{
		std::set<Wektor2D>::iterator iter = zbior.begin();
		//takie wykonanie zapewnia utrzymanie posortowania
		//(zamiast po prostu (*iter).ZamienX(b)
		const Wektor2D * wektorDoUsuniecia = NULL;
		for(; iter != zbior.end(); iter++)
		{
			wektorDoUsuniecia = &(*iter);
		}
		
		if(wektorDoUsuniecia != NULL)
		{
			Wektor2D temp = Wektor2D(*wektorDoUsuniecia);
			temp.ZamienX(b);
			zbior.erase(*wektorDoUsuniecia);
			zbior.insert(temp);
		}
	}

	static void WiekszeXOd(const Wektor2D& wektor)
	{
		if(wektor.PodajX() >= granica)
		{
			wektor.Wypisz();
		}
	}

	static int granica;

	protected:
	std::set<Wektor2D> zbior;

};


