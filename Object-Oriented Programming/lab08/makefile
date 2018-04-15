Wyjatki: Main.o functions.o OutOfRange.o
	g++ -g -Wall Main.o functions.o OutOfRange.o -o Wyjatki
Main.o: Main.cpp Main.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Main.h
	g++ -c -g -Wall functions.cpp
OutOfRange.o: OutOfRange.cpp Main.h OutOfRange.h
	g++ -c -g -Wall OutOfRange.cpp
clean: 
	rm *.o Wyjatki
.PHONY: clean
