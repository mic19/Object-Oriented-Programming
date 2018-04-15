#pragma once

#include<string>
#include<iostream>

class Statek
{
	public:
	void UstawNazwe(std::string podNazwa) {nazwa=podNazwa;};
	void UstawWypornosc(float wyp) {wypornosc=wyp;};
	void UstawIloscPasazerow(int pasazerowie) {liczbaPasazerow=pasazerowie;};
	virtual void WypiszInformacje() const {std::cout << "nazwa: " << nazwa << std::endl;
std::cout << "wypornosc: " << wypornosc << std::endl;};

	protected:
	std::string nazwa;
	float wypornosc;
	int liczbaPasazerow;

};

class Zaglowiec : public virtual Statek
{
	public:
	void ZagleStaw() {zagle="postawione";};
	void ZaglePrecz() {zagle="zlozone";};
	void WypiszStanZagli() {std::cout << "Zagle sa " << zagle << "." << std::endl;};
	virtual void WypiszInformacje() const {Statek::WypiszInformacje(); std::cout << "zagle: " << zagle << std::endl;};

	protected:
	std::string zagle;

};

class StatekSilnikowy : public virtual Statek
{
	public:
	void UstawPoziomOleju(float poziom) {poziomOleju=poziom;};
	void WypiszPoziomOleju() {std::cout << "Poziom oleju wynosi " << poziomOleju << std::endl;};
	virtual void WypiszInformacje() const {Statek::WypiszInformacje(); std::cout << "olej: " << poziomOleju << std::endl;};

	protected:
	float poziomOleju;

};
