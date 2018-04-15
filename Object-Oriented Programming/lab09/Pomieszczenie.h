#pragma once
#include<string>
#include<iostream>

class Pomieszczenie
{
	public:
	Pomieszczenie(std::string podanaNazwa);
	void zetrzyj_kurze() const;
	void umyj_podloge() const;
	void odkurz() const;
	std::string podajNazwe() const;
	template<class T>
	void wstaw(T obiekt)
	{
		std::cout << "Wstawiam " << obiekt <<  " do pomieszczenia: " << nazwa << std::endl;
	};

	protected:
	std::string nazwa;

};


