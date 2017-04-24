main: main.o
	g++ -g -o main main.o

main.o: main.cpp
	g++ -g -c -pthread main.cpp

clean:
	rm -rf *o