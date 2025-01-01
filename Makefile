all: main.cpp include/config.h
	g++ main.cpp -o main

clean:
	rm *.o *.i *.s main