/*
  W zadaniu nalezy napisac specjalny kontener, ktory pozwala na amortyzacje alokacji
  w przypadku dodawania wielu elementow a nie jest bardzo powolny przy dostepie.
  Jest to mianowicie lista polaczona, w ktorej w wezlach zamniast pojedynczego elementu
  mamy tablice zadanej wielkosci.
  Jak to juz taki fajny kontener to niech bedzie szablonem. Argumentami sa typ i rozmiar 
  tablic w kazdym wezle.
  
*/

#include <iostream>
#include "Rope.h" // lista polaczona tablic

int main() {
  Rope<int, 4> ri;
  Rope<float, 10> rf;

  ri,34,45,45,1,12,34;
  std::cout << ri << std::endl;
  std::cout << ri.at(2) << std::endl;  
  std::cout << ri.capacity() << " " << rf.capacity() << std::endl;
  std::cout << ri.size() << " " << rf.size() << std::endl;
   
  Rope<int, 10> riBig(ri);   // konstrukcja z innego rozmiaru
  std::cout << riBig.capacity() << " " << riBig.size() << std::endl;
  std::cout << riBig << std::endl;
}

