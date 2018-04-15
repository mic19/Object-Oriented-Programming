#include "Motorowka.h"

void Motorowka::WypiszInformacje () const 
{
	StatekSilnikowy::WypiszInformacje();
	std::cout<<"pasazerowie: "<<liczbaPasazerow<<"\n";
}


