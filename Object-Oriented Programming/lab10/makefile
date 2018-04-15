Lab10: Main.o functions.o Lab10.h
	g++ -g -Wall Main.o functions.o -o Lab10
Main.o: Main.cpp Lab10.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Lab10.h
	g++ -c -g -Wall functions.cpp
clean: 
	rm *.o Lab10
.PHONY: clean
