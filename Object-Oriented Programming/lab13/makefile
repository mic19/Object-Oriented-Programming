Punkt: Main.o functions.o
	g++ -g -Wall Main.o functions.o -o Punkt
Main.o: Main.cpp Main.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Main.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Punkt
.PHONY: clean
