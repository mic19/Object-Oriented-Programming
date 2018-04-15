Rope: Main.o functions.o Rope.h
	g++ -g -Wall Main.o functions.o -o Rope
Main.o: Main.cpp Rope.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Rope.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Rope
.PHONY: clean
