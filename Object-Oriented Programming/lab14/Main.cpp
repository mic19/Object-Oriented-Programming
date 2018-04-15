// Nazwa pliku wykonywalnego: Wektor

// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// -------------------- UWAGA --------------------
// Nie wolno uzywac zadnych petli ani instrukcji warunkowych
// (m.in. for, while, goto). Zamiast nich nalezy wykorzystac algorytmy
// STL.
// ------------------------------------------------

// Prosze zaimplementowac prosta klase wektora dwuwymiarowego.

// Prosze zaimplementowac klase bedaca lista wektorow. Liste mozna
// sortowac wedlug wspolrzednych X lub Y wektorow. Sortowanie zawsze
// jest od najmniejszej wartosci do najwiekszej.

// Prosze zaimplementowac klase, ktora bedzie umozliwiala wykonywanie
// dzialan na obiektach typu zbior (set). Zbiory wektorow powinny byc
// posortowane tylko wedlug wspolrzednej X. Obiekty tej klasy maja
// faktycznie zmieniac zawartosc zbioru.

// Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). Powinien działać dla dowolnej
// liczby przekształceń.

// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów (w tym własnych wcześniej
// przygotowanych plików)

// UWAGA!
// Wolno korzystac z dokumentacji biblioteki standardowej:
// http://www.sgi.com/tech/stl/table_of_contents.html
// http://www.cplusplus.com/reference/stl/

// Kody źródłowe muszą znajdować się w katalogu ~/oop/lab_LABNR. Prawa
// do tego katalogu muszą być równe 700 (tylko dostęp dla
// właściciela).

// Rozwiazanie (czyli dodane pliki, makefile i Main.cpp) nalezy
// wgrac do UPEL.


#include"Main.h"

int main()
{
  Wektor2D dlugi ("dlugi", 11, 14);
  Wektor2D krotki ("krotki", 2, 22);
  Wektor2D sredni ("sredni", 5, 6);

  ListaWektorow lista;
  lista.Dodaj(&dlugi);
  lista.Dodaj(&krotki);
  lista.Dodaj(&sredni);

  // nieposortowana
  lista.Wypisz();

  // posortowana wedlug X
  lista.PosortujWedlugX();
  lista.Wypisz();
  
  // posortowana wedlug Y
  lista.PosortujWedlugY();
  lista.Wypisz();

  
  Wektor2D elementy [] = {Wektor2D ("zbior_1", 600, 610), Wektor2D ("zbior_2", 700, 710), Wektor2D ("zbior_3", 300, 310), Wektor2D ("zbior_4", 400, 410), Wektor2D ("zbior_5", 100, 110), Wektor2D ("zbior_6", 200, 210), Wektor2D ("zbior_7", 900, 910), Wektor2D ("zbior_8", 500, 510), Wektor2D ("zbior_9",  800, 810)};
  
  // zbior posortowany wedlug wspolrzednych X
  std::set<Wektor2D> zbiorWektorw (elementy, elementy + sizeof(elementy)/sizeof(Wektor2D));

  DzialaniaNaZbiorach dzialania (zbiorWektorw);
  std::cout<<"Zawartosc zbioru wektorow ze wspolrzedna X > 500:\n";
  dzialania.WypiszXWiekszeOd(500);
  dzialania.ZamienX(900, 750);	// zamien pierwszy wektor o wspolrzednej X rownej 900
  std::cout<<"Zawartosc zbioru wektorow ze wspolrzedna X > 500 po zmianie:\n";
  dzialania.WypiszXWiekszeOd(500);
  
  return 0;
}
/*
Nieposortowana
dlugi (11, 14)
krotki (2, 22)
sredni (5, 6)
Posortowana wedlug wsprzednych X
krotki (2, 22)
sredni (5, 6)
dlugi (11, 14)
Posortowana wedlug wsprzednych Y
sredni (5, 6)
dlugi (11, 14)
krotki (2, 22)
Zawartosc zbioru wektorow ze wspolrzedna X > 500:
zbior_8 (500, 510)
zbior_1 (600, 610)
zbior_2 (700, 710)
zbior_9 (800, 810)
zbior_7 (900, 910)
Zawartosc zbioru wektorow ze wspolrzedna X > 500 po zmianie:
zbior_8 (500, 510)
zbior_1 (600, 610)
zbior_2 (700, 710)
zbior_7 (750, 910)
zbior_9 (800, 810)
*/
