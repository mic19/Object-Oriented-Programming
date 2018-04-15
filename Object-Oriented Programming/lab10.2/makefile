Lab12: Main.o functions.o Lab12.h
	g++ -g -Wall Main.o functions.o -o Lab12
Main.o: Main.cpp Lab12.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Lab12.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Lab12
.PHONY: clean
