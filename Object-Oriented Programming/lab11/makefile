Lista: Main.o functions.o
	g++ -g -Wall Main.o functions.o -o Lista
Main.o: Main.cpp list.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp list.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Lista
.PHONY: clean
