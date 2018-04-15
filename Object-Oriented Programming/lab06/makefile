Statki: Main.o Kliper.o LodzPodwodna.o Motorowka.o Szkuner.o Jacht.o Statek.h
	g++ -g -Wall Main.o Kliper.o LodzPodwodna.o Motorowka.o Szkuner.o Jacht.o -o Statki
Main.o: Main.cpp Main.h
	g++ -g -Wall -c Main.cpp
Kliper.o: Kliper.cpp Kliper.h Main.h Statek.h
	g++ -g -Wall -c Kliper.cpp
LodzPodwodna.o: LodzPodwodna.cpp LodzPodwodna.h Main.h Statek.h
	g++ -g -Wall -c LodzPodwodna.cpp
Motorowka.o: Motorowka.cpp Motorowka.h Main.h Statek.h
	g++ -g -Wall -c Motorowka.cpp
Szkuner.o: Szkuner.cpp Szkuner.h Main.h Statek.h
	g++ -g -Wall -c Szkuner.cpp
Jacht.o: Jacht.cpp Jacht.h Main.h Statek.h
	g++ -g -Wall -c Jacht.cpp
clean: 
	rm  *.o Statki
.PHONY: clean
