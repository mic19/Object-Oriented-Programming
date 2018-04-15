Lokaj: Main.o functions.o Main.h Pomieszczenie.h
	g++ -g -Wall Main.o functions.o -o Lokaj
Main.o: Main.cpp Main.h
	g++ -g -Wall -c Main.cpp
functions.o: functions.cpp Pomieszczenie.h
	g++ -g -Wall -c functions.cpp
clean: 
	rm  *.o Lokaj
.PHONY: clean
