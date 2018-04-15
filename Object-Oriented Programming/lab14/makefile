Wektor: Main.o functions.o
	g++ -g -Wall Main.o functions.o -o Wektor
Main.o: Main.cpp Main.h ListaWektorow.h Wektor2D.h DzialaniaZbiory.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Main.h ListaWektorow.h Wektor2D.h DzialaniaZbiory.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Wektor
.PHONY: clean
