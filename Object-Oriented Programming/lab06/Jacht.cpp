#include "Jacht.h"

void Jacht::WypiszInformacje() const
{
	Zaglowiec::WypiszInformacje();
	std::cout << "olej " << poziomOleju << std::endl;
}
