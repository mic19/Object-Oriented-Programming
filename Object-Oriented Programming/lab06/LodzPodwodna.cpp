#include "LodzPodwodna.h"

void LodzPodwodna::UstawMaksymalneZanurzenie(float zan)
{
	m_zanurzenieMax=zan;
}

void LodzPodwodna::WypiszInformacje () const 
{
	StatekSilnikowy::WypiszInformacje();
	std::cout<<"zanurzenie: "<<m_zanurzenieMax<<"\n";
}


