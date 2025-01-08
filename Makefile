all: main.o lesson2.o lesson3.o
	g++ main.o lesson2.o lesson3.o -o main

lesson2.o: src/lesson2.cpp include/lesson2.h include/config.h 
	g++ -c src/lesson2.cpp

lesson3.o: src/lesson3.cpp include/lesson3.h include/config.h 
	g++ -c src/lesson3.cpp

main.o: main.cpp include/config.h 
	g++ -c main.cpp

clean:
	rm *.o *.i *.s main