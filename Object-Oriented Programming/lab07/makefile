Postacie: Main.o functions.o Main.h
	g++ -g -Wall Main.o functions.o -o Postacie
Main.o: Main.cpp Main.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Kobieta.h Mezczyzna.h Postac.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Postacie
.PHONY: clean
