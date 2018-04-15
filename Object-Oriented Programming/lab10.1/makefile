Lab11: Main.o functions.o Lab11.h
	g++ -g -Wall Main.o functions.o -o Lab11
Main.o: Main.cpp Lab11.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Base.h Array.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Lab11
.PHONY: clean
