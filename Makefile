all: main.o lesson2.o
	g++ main.o lesson2.o -o main

main.o: main.cpp include/config.h 
	g++ -c main.cpp

lesson2.o: src/lesson2.cpp include/lesson2.h 
	g++ -c src/lesson2.cpp

clean:
	rm *.o *.i *.s main