RuchomeObrazki: Main.o functions.o zrodla.o
	g++ -g -Wall Main.o functions.o zrodla.o -o RuchomeObrazki
Main.o: Main.cpp Main.h Zrodla.h
	g++ -c -g -Wall Main.cpp
functions.o: functions.cpp Main.h Zrodla.h
	g++ -c -g -Wall functions.cpp
zrodla.o: zrodla.cpp Main.h Zrodla.h
	g++ -c -g -Wall zrodla.cpp
clean: 
	rm *.o RuchomeObrazki
.PHONY: clean
